main :  src/main.c documentation docs
	scripts/./help.sh
	gcc src/course.c src/student.c src/main.c -o build/main 

course.o : src/course.c
	scripts/./help.sh
	gcc -Wall -c -o build/course.o src/course.c

student.o : src/student.c
	scripts/./help.sh
	gcc -Wall -c -o build/student.o src/student.c

documentation :
	scripts/./help1.sh

clean :
	scripts/./help3.sh

doxygen :
	doxygen -g

docs : doxygen
	doxygen Doxyfile
