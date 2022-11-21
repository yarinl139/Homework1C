all: mains maindloop maindrec loops recursives recursived loopd

clean:
	rm *.o *.a *.so mains maindrec maindloop

loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so


maindrec: main.o recursived
	gcc -Wall main.o -L. -lclassrec -o maindrec

maindloop: main.o loopd
	gcc -Wall main.o -L. -lclassloops -o maindloop

mains: main.o recursives
	gcc -Wall -o mains main.o libclassrec.a

libclassloops.so: basicClassification.c advancedClassificationLoop.c basicClassification.o advancedClassificationLoop.o
	gcc -Wall -fPIC -c basicClassification.c advancedClassificationLoop.c
	gcc -Wall basicClassification.o advancedClassificationLoop.o -shared -o libclassloops.so 

libclassrec.so: basicClassification.c advancedClassificationRecursion.c basicClassification.o advancedClassificationRecursion.o
	gcc -Wall -fPIC -c basicClassification.c advancedClassificationRecursion.c
	gcc -Wall  basicClassification.o advancedClassificationRecursion.o -shared -o libclassrec.so 

libclassloops.a:basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
	ranlib libclassloops.a

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
	ranlib libclassrec.a

basicClassification.o: basicClassification.c
	gcc -Wall -c basicClassification.c 
advancedClassificationLoop.o: advancedClassificationLoop.c 
	gcc -Wall -c advancedClassificationLoop.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c 
	gcc -Wall -c advancedClassificationRecursion.c 
main.o: main.c
	gcc -Wall -c main.c
