#include <stdio.h>
#include <stdlib.h>
#define MAX 1445

int main (void) {
	FILE *input;
	char hashtag, at, comma, colon, times;
	int maxTop=0, maxLeft=0, x, y, left, top, no, counter=0, i, j, field[MAX][MAX], found;
	
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
		        field[i][j]++;
		    }
		}
	}
	
	//fseek(input, 0, SEEK_SET);
	rewind(input);
    
    //find the field that is not overlapping with any other field
	while(1){
		if(fscanf(input, "%c%d %c %d%c%d%c %d%c%d\n", &hashtag, &no, &at, &left, &comma, &top, &colon, &y, &times, &x)!=10){
			break;
		}
		
		found=1;
		
		++counter;
		
		for(i=top; i<x+top; ++i){
			for(j=left; j<y+left; ++j){
				if(field[i][j]!=1){
					found=0;
				}
			}
		}
		
		if(found==1){
			break;
		}
	}
	
	printf("%c%d %c %d%c%d%c %d%c%d\n", hashtag, no, at, left, comma, top, colon, y, times, x);
	
	return 0;
}
