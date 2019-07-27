# Makefile
# Specify what I need in the end. One single executable
zyc_executable_by_makefile : main.o Point.o Rectangle.o
# Read this as divisionExecutable depends on main.o div.o
# But how is it produced??? Hmm...using the below statement
	g++ main.o Point.o Rectangle.o -o zyc_executable_by_makefile
# starts with tab, I repeat tab
#-----------------------------------------------------------------
# But main.o is not there? So specify how it is produced.
main.o : main.cpp Point.h Rectangle.h
	g++ -c main.cpp
Point.o : Point.cpp Point.h
	g++ -c Point.cpp
Rectangle.o : Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp