x86_64-w64-mingw32-gcc src/main.c src/display.c src/game.c src/input.c src/log.c src/media.c src/piece.c -I/usr/local/x86_64-w64-mingw32/include/SDL2 -I/usr/local/x86_64-w64-mingw32/lib -I /usr/local/x86_64-w64-mingw32/bin/ -Iinclude/ -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -o out.exe