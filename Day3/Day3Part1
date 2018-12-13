#include <stdio.h>
#include <stdlib.h>
#define MAX 1445

int main (void) {
	FILE *input;
	char hashtag, at, comma, colon, times;
	int x, y, left, top, no, counter=0, i, j, field[MAX][MAX];
	
	for(i=0; i<MAX; ++i){
	    for(j=0; j<MAX; ++j){
	        field[i][j]=0;
	    }
	}
	
	input=fopen("file.txt", "r");
	
	while(1){
		
		if(fscanf(input, "%c%d %c %d%c%d%c %d%c%d\n", &hashtag, &no, &at, &left, &comma, &top, &colon, &y, &times, &x)!=10){
			break;
		}
		
		for(i=top; i<x+top; ++i){
		    for(j=left; j<y+left; ++j){
		        field[i][j]+=1;
		    }
		}
	}
	
	//count how many inches are overlapping
	for(i=0; i<MAX; ++i){
		for(j=0; j<MAX; ++j){
			if(field[i][j]>1){
				++counter;
			}
		}
	}
	
	printf("%d is the number of inches that are not overlapping\n", counter);
	
	return 0;
}
