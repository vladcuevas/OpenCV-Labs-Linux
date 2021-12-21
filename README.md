  # OpenCV-Labs-Linux

  ## Documentation:

  - [Gray Image](03-GrayImage/README.md)
  - [Image](05-Image/README.md)
  - [Basic Image Operations](06-BasicImageOperations/README.md)
  - [Binary Image Processing](17-BinaryImageProcessing/README.md)

  # Commands to Install OpenCV
  
  ```bash
  # Install HomeBrew:
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
  
  #Run below brew commands:
  brew install cmake
  brew install qt5
  brew install opencv
  ```

  Then test opencv with sample from 00-TestOpenCV-Installation. There are some shell script files that require to give execution permission, i.e chmod 700

  As of now it looks that is simpler than in Linux and Windows, lets test this for a couple of days

  # Code Editors

  ```
  include errors detected. Please update your includePath. Squiggles are disabled for this translation unit opencv
  ```

  When using editors errors regarding the libraries location (lib not found) will occur, as Homebrew won't install in standard location, we must specify manually the location, this can be done finding where opencv was installed by Homebrew, which might be in similar path to the below:

  ./System/Volumes/Data/opt/homebrew/Cellar/opencv/4.5.4/include/opencv4/opencv2
  ./opt/homebrew/Cellar/opencv/4.5.4/include/opencv4/opencv2

  Just copy one of the above paths to the configuration in the C++ extension or similar. A file called c_cpp_properties.json is added in this repository as an example.

  # CMAKE

  CMAKE will require som fine tunning, it is adviced to take some tutorial on how to use that, there are many in the internet.

  In order to avoid errors in the M1, the below line must be added to the CMakeList.txt file:

  ```
  set (CMAKE_CXX_STANDARD 11)
  ```