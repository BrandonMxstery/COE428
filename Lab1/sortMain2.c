#include <stdio.h> 
#include <stdlib.h> 
#include "mySort.h" 
int main(int argc, char * argv[]) { 
    
    int data[100000]; /* Array of ints to sort */ 
    int nDataItems;   /* number of actual items in the array */ 
    int i; 
    nDataItems = 4; 
    data[0] = 10; 
    data[1] = 990; 
    data[2] = 5; 
    data[3] = 13; 
	
	//mySort(data, nDataItems); 
	if (argc > 1) {
		nDataItems = argc-1;

		for(i = 1; i <argc; i++){
		//printf("data[%d]=argv[%d]= %d\n",i-1,i,atoi(argv[i]));
		data[i-1] = atoi(argv[i]);
	}
}	
		mySort(data, nDataItems);


    	for(i = 0; i < nDataItems-1; i++) { 
        	if (data[i] > data[i+1]) { 
            	fprintf(stderr, "Sort error: data[%d] (= %d)" 
             	" should be <= data[%d] (= %d)- -aborting\n", 
              	i, data[i], i+1, data[i+1]); 
            exit(1); 
         
    } 

}

    /* Print sorted array to stdout */ 
    for(i = 0; i < nDataItems; i++) { 
        printf("%d\n", data[i]); 
    } 
 //exit(0); 
} 

