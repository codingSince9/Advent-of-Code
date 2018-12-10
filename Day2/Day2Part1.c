#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
	FILE *ul;
	char str[250][27];
	int provjera[250]={0};
	int counter2=0, counter3=0;
	int sum=0;
	int l=0, j, i=0, found2, found3, repeatedLetter;
	
	ul=fopen("file.txt", "r");
	
	while(1){
	    if(fscanf(ul, "%s", &str[i])!=1)
	        break;
		++i;
	}

	for(i=0; i<=250; ++i){
		found2=0;
		found3=0;
		for(l=0; l<strlen(str[i]); ++l){
			repeatedLetter=1;
		 
			if(str[i][l]!='X'){
				for(j=l+1; j<strlen(str[i]); ++j){
					if(str[i][l]==str[i][j]){
						++repeatedLetter;
						str[i][j]='X';
					}
				}
			}
			
			if(repeatedLetter==2 && found2==0){
				++counter2;
				found2=1;
			}
			
			else if(repeatedLetter==3 && found3==0){
				++counter3;
				found3=1;
			}      
		}
	}


	sum=counter2*counter3;
	printf("No. 2: %d\n", counter2);
	printf("No. 3: %d\n", counter3);
	printf("Sum: %d", sum);
	fclose(ul);
	return 0;
}