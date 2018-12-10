#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
	FILE *ul;
	char str[250][27];
	int equalLetters[250][250]={0};
	int diffLetter[27]={0};
	int k=0, minI=0, minJ=0, i=0, j=0, broj=0;
	
	ul=fopen("datoteka.txt", "r");
	
	while(1){
	    if(fscanf(ul, "%s", &str[k])!=1)
	        break;
		++k;
	}
	
	for(i=0; i<250; ++i){
		for(j=i+1; j<250; ++j){
			for(k=0; k<strlen(str[i]); ++k){
				if(str[i][k]==str[j][k]){
					equalLetters[i][j]++;
				}
			}
		}
	}
	
	//find 2 strings which have lowest different letters
	for(i=0; i<250; ++i){
		for(j=i+1; j<250; ++j){
			if(equalLetters[i][j]>broj){
				broj=equalLetters[i][j];
				minJ=j;
				minI=i;
			}
		}
	}
	
	//printing 2 strings with lowest count of different letters
	printf("%s\n", str[minI]);
	printf("%s\n", str[minJ]);
	fclose(ul);
	return 0;
}
