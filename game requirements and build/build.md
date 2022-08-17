Сборка осуществляется через программу mingw64.exe командой:
make
из папки игры

MakeFile по умолчанию удаляет папку с уровнями (в cmake-build-debug), поэтому от туда была убрана строчка после clean:
```makefile
clean:
    rm -rf cmake-build-debug
```