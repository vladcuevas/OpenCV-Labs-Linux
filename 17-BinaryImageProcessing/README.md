# Connected Component Analysis

In this section, we will dip our toes into a simple computer vision algorithm called **Connected Component Analysis (CCA)**. It is a fancy name for labeling blobs in a binary image. So, it can also be used to count the number of blobs ( also called connected components ) in a binary image.

In the figure showned, we see a binary image with five blobs corresponding to the letters T, R, U, T and H. Connected Component Analysis (CCA) allows us to apply a label to every blob. In other words, CCA will create a mask where all pixels corresponding to the background are 0, all pixels corresponding to the first blob, (i.e. the letter T) are 1, those corresponding to R are 2 and so on and so forth.

## Color Coding of Components

Since it is a bit difficult to visualize the difference in intensity value in grayscale images, we apply a colormap so that grayscale values are converted to color for the purpose of display.

First, we normalize the image pixel values to 0 to 255. To achieve this we first find the min and max values in the image, and then normalize the image by subtracting the min and dividing by (max - min). This normalizes the image to be between 0 and 1. Finally 255 is multiplied to we get an image with values between 0 and 255. Finally, we apply a colormap on the labelled image.

## What is a colormap ?

Let’s say we want to show the temperature in different parts of the United States on a map. We could overlay temperature data on top of a US map as a grayscale image — darker regions representing cooler temperatures, and brighter regions representing hotter regions. Not only is such a representation incredibly boring, it is a bad representation for two big reasons.

- First, the human visual system is not optimized to measure small changes in grayscale intensities. We are way better at perceiving changes in color.  
- Second, we associate different meanings with different colors. It is much more meaningful to represent cooler temperatures using blue and warmer temperatures using red.  

Temperature data is just one example, but there are several other cases where the data is single valued (grayscale), but it makes sense to convert it to color data for visualization. Other examples of data that are better visualized by pseudo-coloring are height, pressure, density, humidity so on and so forth.

OpenCV defines 12 colormaps that can be applied to a grayscale image using the function applyColorMap to produce a pseudocolored image. We use COLORMAP_JET for our example.


# Contours 

Contours are simply the boundaries of an object or part of object in an image. They are useful in shape analysis and object Detection/Recognition using traditional Computer Vision algorithms.

You can do a lot of analysis based on contours to arrive at a solution to many computer vision problems.

## approxPolyDP()

Approximates a polygonal curve(s) with the specified precision.  

The function cv::approxPolyDP approximates a curve or a polygon with another curve/polygon with less vertices so that the distance between them is less or equal to the specified precision. It uses the Douglas-Peucker algorithm http://en.wikipedia.org/wiki/Ramer-Douglas-Peucker_algorithm.

It is very usefull to find contours in documents.

## How to find Contours

There are many algorithms for finding Contours. We are using the OpenCV function findContours to get the boundaries of the objects.

## Contour Properties

Once you have detected the contours from an image, it becomes very easy to do further analysis on the basis of various properties of contours. Let us discuss a few useful properties of contours.

## Center of Mass or Centroid  

Find the center of mass for each contour.

```cpp
Moments M;
int x,y;
for (size_t i=0; i < contours.size(); i++){
    // We will use the contour moments
    // to find the centroid
    M = moments(contours[i]);
    x = int(M.m10/double(M.m00));
    y = int(M.m01/double(M.m00));
    
    // Mark the center
    circle(image, Point(x,y), 10, Scalar(255,0,0), -1);
}
```

## Bounding Boxes

There are 2 type of bounding boxes we can create around a contour:

- A vertical rectangle   
- A rotated rectangle - This is the bounding box with the minimum area  

## Fit a circle and ellipse

Fitting a bounding box (vertical or rotated) is the preferred choice in most cases but in cases where you are only dealing with circles or ellipses, fitting a circle and/or an ellipse is a much better choice.

Let's see how we can do it.