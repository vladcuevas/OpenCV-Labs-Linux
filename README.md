  # OpenCV-Labs-Linux

  # Commands to Install OpenCV
  
  ```bash
  $  mkdir installation
  $  mkdir installation/OpenCV
  $  OpenCV_Home_DIR=$(pwd)
  $  sudo apt-get -y update
  $  sudo apt-get -y upgrade
  $  sudo apt-get -y remove x264 libx264-dev
  $  sudo apt-get -y install build-essential checkinstall cmake pkg-config yasm
  $  sudo apt-get -y install git gfortran
  $  sudo apt autoremove
  $  sudo apt-get -y install libjpeg8-dev libpng-dev
  $  sudo apt-get -y install software-properties-common
  $  sudo add-apt-repository "deb http://security.ubuntu.com/ubuntu xenial-security main"
  $  sudo apt-get -y update
  $  sudo apt-get -y install libjasper1
  $  sudo apt-get -y install libtiff5-dev
  $  sudo apt-get -y install libavcodec-dev libavformat-dev libswscale-dev libdc1394-22-dev
  $  sudo apt-get -y install libxine2-dev libv4l-dev
  $  cd /usr/include/linux
  $  sudo ln -s -f ../libv4l1-videodev.h videodev.h
  $  cd "$OpenCV_Home_DIR"
  $  sudo apt-get -y install libatlas-base-dev
  $  sudo apt-get -y install libfaac-dev libmp3lame-dev libtheora-dev
  $  sudo apt-get -y install libvorbis-dev libxvidcore-dev
  $  sudo apt-get -y install libopencore-amrnb-dev libopencore-amrwb-dev
  $  sudo apt-get -y install libavresample-dev
  $  sudo apt-get -y install x264 v4l-utils
  $  sudo apt-get -y install libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev
  $  sudo apt-get -y install libgtk2.0-dev libtbb-dev qt5-default
  $  sudo apt-get -y install libatlas-base-dev
  $  sudo apt-get -y install libfaac-dev libmp3lame-dev libtheora-dev
  $  sudo apt-get -y install libvorbis-dev libxvidcore-dev
  $  sudo apt-get -y install libopencore-amrnb-dev libopencore-amrwb-dev
  $  sudo apt-get -y install libavresample-dev
  $  sudo apt-get -y install x264 v4l-utils
  $  sudo apt-get -y install libprotobuf-dev protobuf-compiler ; sudo apt-get -y install libgoogle-glog-dev libgflags-dev ; sudo apt-get -y install libgphoto2-dev libeigen3-dev libhdf5-dev doxygen ; 
  $  git clone https://github.com/opencv/opencv_contrib.git
  $  cd opencv_contrib
  $  git checkout tags/4.5.0
  $  cd ..
  $  git clone https://github.com/opencv/opencv.git
  $  cd opencv
  $  git checkout tags/4.5.0
  $  mkdir build && cd build
  $  cmake       -D CMAKE_BUILD_TYPE=RELEASE       -D CMAKE_INSTALL_PREFIX=/usr/local       -D INSTALL_C_EXAMPLES=ON       -D WITH_TBB=ON       -D WITH_V4L=ON       -D WITH_OPENGL=ON       -D OPENCV_EXTRA_MODULES_PATH=../../opencv_contrib/modules       -D BUILD_EXAMPLES=ON       ..
  $  make
  $  sudo make install
  $  cd "$OpenCV_Home_DIR"
  $  cd opencv
  $  rm -rf build
```