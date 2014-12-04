mkdir build-windows-msvc
cd build-windows-msvc
:: on windows, cmake will search and use the Microsoft Visual Studio compiler per default
cmake ../
cmake --build . --target ALL_BUILD --config Release
cd ..
