# 1.Embedded_linux_TASK1

## 1.1 Creating folders for the calculator and its operations

![](README.assets/27-12-23(1).png)

## 1.2 Creating static library 

Compiling the files using gcc command to generate object files (.o) then creating the static library

```
#compiling the files to generate .o files
gcc -c *.c 

#create static library
ar rcs liboperation.a *.o
```

![](README.assets/27-12-23(2).png)

## 1.3 Link the static library 

Link the static library **(liboperation.a)** with the **main.c** to generate executable application.

```
gcc -static main.c -o static -L. -loperation
```

![](README.assets/27-12-23(3).png)

 # 2.Creating Dynamic Library

Compiling the files using gcc command to generate object files (.o) then creating the static library and link it.

```
#Compiling the files using gcc command .
gcc -c -fPIC main.c
gcc shared -o liboperation .so *.o
# linking Dynamic library (liboperation.so) with main.c to generate executable application.
gcc main.c -L. -loperation -o Dynamic
# make sure that directory containing liboperation.so in the library path. 
LD_LIBRARY_PATH
```

![](README.assets/27-12-23(4).png)



