# ENPM 808X - PID Implementation using Test Driven Development
[![Build Status](https://app.travis-ci.com/aswathselvam/TestDrivenDev.svg?branch=main)](https://app.travis-ci.com/aswathselvam/TestDrivenDev)
[![Coverage Status](https://coveralls.io/repos/github/aswathselvam/TestDrivenDev/badge.svg?branch=main)](https://coveralls.io/github/aswathselvam/TestDrivenDev?branch=main)
---

## Overview

ENPM 808X Test Driven Development Assignment
This is a simple implementeation of a PID Controller for ACME Robotics, using [pair programming](https://en.wikipedia.org/wiki/Pair_programming) method.

## Contributors:
Pair B: 
* Part 1(base code implementation) - Driver: [**Aswath Muthuselvam**](https://github.com/aswathselvam) Navigator: [**Prannoy Namala**](https://github.com/PrannoyNamala) 


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
mkdir -p boilerplate-eclipse
cd boilerplate-eclipse
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
