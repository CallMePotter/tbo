cmake -S .. -B release -DCMAKE_BUILD_TYPE=RELEASE -G "MinGW Makefiles"
cmake -S .. -B debug -DCMAKE_BUILD_TYPE=DEBUG -G "MinGW Makefiles"    
make -C degub
make -C release
mv debug/chess.exe ../bin/debug.exe
mv release/chess.exe ../bin/release.exe