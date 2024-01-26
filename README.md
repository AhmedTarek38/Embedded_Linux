# TASK4 : Creating a Static Library for AVR Drivers (MCAL Layer)

### 1.create project directory 

### 2. append .c ,.h ,main.c to it's respective created directory

#### 3. create four global variables in .bashrc file that will hold the path to the avr-gcc , avr-ar , avr-objdump and avr-objcopy

```
cd ~ 
vim .bashrc
##enter edit mode by pressing on i
export AVR_GCC=/avr-gcc
export AVR_AR=/home/x-tools/avr/bin/avr-ar
export AVR_OBJDUMP=/home/x-tools/avr/bin/avr-objdump
export AVR_OBJCOPY=/home/x-tools/avr/bin/avr-objcopy
##press esc to exit edit mode
## shift + colon then write "wq" to save and exit
```

​          ![](README.assets/29-12-23(1).png)

### 4. move to MCAL directory and compile the .c files

```
$AVR_GCC -c *.c -I . -I ../
$AVR_AR -rcs libMCAL.a *.o
```

### 5. move to HAL directory and compile the .c files

```
$AVR_GCC -c *.c -I . -I ../ -I ../MCAL
$AVR_AR -rcs libHAL.a *.o
```

### 6. copy the the libraries to the main directory using cp command

### 7. build the main application with the static libraries created for MCAL and HAL layers

### 8. in order to create .hex file in intel format from the .elf file generated from the build process we will use the objcopy utility

### 9. flash the "program.elf" file or "program.hex" file on "proteus" or using usbasp on target.



```
$AVR_GCC main.c APP.c Delayfunc.c -o program.elf -mmcu=atmega32 -I . -I MCAL/ -I HAL/ -L . -lHAL -lMCAL  -DF_CPU=8000000UL 
```



```
$AVR_OBJCOPY -j .text -j .data -O ihex program.elf program.hex
```

![](README.assets/29-12-23(4).png)

![](README.assets/29-12-23(3).png)

![](README.assets/29-12-23(2).png)
