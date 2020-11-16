if [ ! -d "build" ]; then
  mkdir build
fi
cd build
cmake ..
if [ $? -ne 0 ]; then

  exit
fi
make
if [ $? -ne 0 ]; then

  exit
fi
./../output/CMake_Study
