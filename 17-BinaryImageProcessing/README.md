# Connected Component Analysis

In this section, we will dip our toes into a simple computer vision algorithm called **Connected Component Analysis (CCA)**. It is a fancy name for labeling blobs in a binary image. So, it can also be used to count the number of blobs ( also called connected components ) in a binary image.

In the figure showned, we see a binary image with five blobs corresponding to the letters T, R, U, T and H. Connected Component Analysis (CCA) allows us to apply a label to every blob. In other words, CCA will create a mask where all pixels corresponding to the background are 0, all pixels corresponding to the first blob, (i.e. the letter T) are 1, those corresponding to R are 2 and so on and so forth.

## Color Coding of Components

Since it is a bit difficult to visualize the difference in intensity value in grayscale images, we apply a colormap so that grayscale values are converted to color for the purpose of display.

First, we normalize the image pixel values to 0 to 255. To achieve this we first find the min and max values in the image, and then normalize the image by subtracting the min and dividing by (max - min). This normalizes the image to be between 0 and 1. Finally 255 is multiplied to we get an image with values between 0 and 255. Finally, we apply a colormap on the labelled image.

## What is a colormap ?

Let’s say we want to show the temperature in different parts of the United States on a map. We could overlay temperature data on top of a US map as a grayscale image — darker regions representing cooler temperatures, and brighter regions representing hotter regions. Not only is such a representation incredibly boring, it is a bad representation for two big reasons.

First, the human visual system is not optimized to measure small changes in grayscale intensities. We are way better at perceiving changes in color.  
Second, we associate different meanings with different colors. It is much more meaningful to represent cooler temperatures using blue and warmer temperatures using red.  
Temperature data is just one example, but there are several other cases where the data is single valued (grayscale), but it makes sense to convert it to color data for visualization. Other examples of data that are better visualized by pseudo-coloring are height, pressure, density, humidity so on and so forth.

OpenCV defines 12 colormaps that can be applied to a grayscale image using the function applyColorMap to produce a pseudocolored image. We use COLORMAP_JET for our example.
