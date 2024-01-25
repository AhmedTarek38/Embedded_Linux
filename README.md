# 1. Cross_tool_ng

## how to make an avr/arm tool-chain for your project



- ### cloning the crosstool_ng from the repo before setting up the environment

  ```
  git clone <github repo>
  ```

  ![](README.assets/22-12-23(1).png)

  - ### set up the environment

  ```
  ./bootstrap
  ```

  

![](README.assets/22-12-23(2).png)

- ### check all dependencies

  ```
  ./configure --enable-local
  ```

  ![](README.assets/22-12-23(3).png)

- ### Generate make file using cross_tool_ng

  ```
  make
  ```

  ![](README.assets/22-12-23(4)-1706225838850-5.png)

  - ### list the needed microcontrollers

    ```
    ./ct-ng list-samples
    ```

  ![](README.assets/22-12-23(6).png)

- ## choose the micro controller => configure it => configure tool chain => build 

  ```
  ./ct-ng <microcontrollername>
  ./ct-ng menuconfig
  ./ct-ng build
  ```

  ![](README.assets/22-12-23(7).png)
