mkdir -p build && cd build && cmake -DCMAKE_CXX_COMPILER=/usr/bin/g++ -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. && make && cp compile_commands.json .. && cd ..
