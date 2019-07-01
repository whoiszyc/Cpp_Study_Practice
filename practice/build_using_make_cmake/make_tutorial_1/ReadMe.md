Source: https://medium.com/coding-blocks/make-and-cmake-automating-c-build-process-900f569a75db

This directory, though small and simple, shows how to call functions in other files from main.cpp using headfiles. 
More importantly, it instructs how to build executable file from source code using g++ and makefile.


# Build using g++
## Just translate the files.
## Result would be div.o main.o in the present working directory
g++ -c div.cpp
g++ -c main.cpp
## Do all the linking stuff
g++ div.o main.o -o divisonExecutable


# Writing our Makefile
That’s lot to remember. Now let’s write an equivalent Makefile
Important : The statements starting with # are for humans and shall not be typed in the terminal. But do read them.
```
## Makefile
## Specify what I need in the end. One single executable
divisonExecutable : main.o div.o
# Read this as divisionExecutable depends on main.o div.o
# But how is it produced??? Hmm...using the below statement
    g++ main.o div.o -o divisonExecutable 
# starts with tab, I repeat tab
#-----------------------------------------------------------------
# But main.o is not there? So specify how it is produced.
main.o : main.cpp div.h
    g++ -c main.cpp
# Same for test.o
test.o : test.cpp test.h
    g++ -c test.cpp
```
So, we have written a Makefile that contain instruction to automate the compilation process. The program that understands this is make.
So simply write
make
Yup! Just make. make looks for makefile, if not found, Makefile.
If you need to specify your own file name, you need to specify
make -f name-of-my-file-that-make-will-use
When you will run make, you can see the following in your pwd.
test.o
main.o
divisonExecutable
If you want to learn more about make do visit these two articles which I found really helpful.


# CMake
Now what if writing Makefile is also tedious. For that we have cmake that will generate Makefile for us.
Hope this article helped you understand the make and cmakebeyond commands.
