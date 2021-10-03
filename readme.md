# ENPM 808X - PID Implementation using Test Driven Development
[![Build Status](https://app.travis-ci.com/aswathselvam/TestDrivenDev.svg?branch=main)](https://app.travis-ci.com/aswathselvam/TestDrivenDev)
[![Coverage Status](https://coveralls.io/repos/github/aswathselvam/TestDrivenDev/badge.svg?branch=main)](https://coveralls.io/github/aswathselvam/TestDrivenDev?branch=main)
---

## Overview

This code is part of "Test Driven Development" software development process which is a concept in Agile.
This is a simple implementeation of a PID Controller for ACME Robotics, using [pair programming](https://en.wikipedia.org/wiki/Pair_programming) method.

## Contributors:
* Part A  
Driver: [**Aswath Muthuselvam**](https://github.com/aswathselvam)  
Navigator: [**Prannoy Namala**](https://github.com/PrannoyNamala)  
* Part B  
Driver: [**Pratik Bhujbal**](https://github.com/Prat33k-dev)  
Navigator: [**Sumedh Reddy Koppula**](https://github.com/sumedhreddy90)
  
## About PID Controller

PID controller is by far the most common way of using feedback in a practical industrial system. The output of the PID Controller is based on present, past and future values of error in the system. There are three components in a PID Controller
-	Proportional Term: The proportional term accounts for the present value of the error.
-	Intergral Term: The integral term accounts for the past values of the error. 
-	Derivative term: The derivative term accounts for the future values of the error based on the rate of change.

Here is a diagram of how PID Controller looks like
![PID Controller](https://user-images.githubusercontent.com/7314342/135725156-99180a1f-32c4-4916-9115-1ab36f5d8dd9.png)

The input/output relation of the PID Controller is given by,
![PID Controller I/O relation](https://user-images.githubusercontent.com/7314342/135725245-f3f998ac-46e9-4142-b04b-b2a9297c12bc.png)

The PID control Variable ```u(t)``` is then input to the process. The output from process is then compared to give us error value ```e(t)```. 


## UML Diagram
Here is the link for the UML diagram showing the design of PID controller. External [Link](https://drive.google.com/file/d/14lxTFG36SRcakcf2CNTkY-IKOutR6YpD/view?usp=sharing).

## Standard install via command-line
```
git clone --recursive https://github.com/aswathselvam/TestDrivenDev.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone --recursive https://github.com/aswathselvam/TestDrivenDev.git
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of cpp-boilerplate

```
cd ~/workspace
mkdir -p pid-eclipse
cd pid-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../TestDrivenDev/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "boilerplate-eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold boilerplate-eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the boilerplate-eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)
