all:bubblesort selectionsort insertionsort bubble_str selection_str insertion_str
bubblesort:bubblesort.c
	gcc bubblesort.c myfile.c -o bubblesort
selectionsort:selectionsort.c
	gcc selectionsort.c myfile.c -o selectionsort
insertionsort:insertionsort.c
	gcc insertionsort.c myfile.c -o insertionsort
bubble_str:bubblestringsort.c
	gcc bubblestringsort.c myfile.c -o bubblestringsort
selection_str:selectionstringsort.c
	gcc selectionstringsort.c myfile.c -o selectionstringsort
insertion_str:insertionstringsort.c
	gcc insertionstringsort.c myfile.c -o insertionstringsort
clean:
	rm -f bubblesort selectionsort insertionsort
