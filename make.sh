set -e

echo "Clean build..."
rm -rf build && mkdir build

echo "Resolve submodules..."
git submodule init && git submodule update

echo "CMake run..."
cd build
cmake ..
make && make install
cd ..

echo "Run tests..."
bin/raccoon_tests

echo "Run ximula..."
bin/raccoon_cpu
