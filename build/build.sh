cmake -S .. -B production -DCMAKE_BUILD_TYPE=RELEASE -G "MinGW Makefiles"
cmake -S .. -B debug -DCMAKE_BUILD_TYPE=DEBUG -G "MinGW Makefiles"    
make -C production
make -C debug
mv production/chess.exe ../bin/production.exe
mv debug/chess.exe ../bin/debug.exe