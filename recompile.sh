if  [ ! -d "build" ];then
  mkdir build
fi
cd build
make clean
cmake ..
make
./../output/CMake_Study
