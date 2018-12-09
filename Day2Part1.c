#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
	FILE *ul;
	char str[250][27];
	int provjera2[250]={0};
	int provjera3[250]={0};
  int provjera[250]={0};
	int brojac2=0, brojac3=0;
	int suma=0;
	int k=0, l=0, j, i, h, u=0, naso2, naso3;
	
	ul=fopen("datoteka.txt", "r");
	
	while(1){
	    if(fscanf(ul, "%s", &str[k])!=1)
	        break;
		++k;
	}

  /*//print upisa
  for(i=0; i<250; ++i){
		printf("%s %d\n", str[i], strlen(str[i]));
  }*/


	for(i=0; i<=250; ++i){
    naso2=0;
    naso3=0;
		for(l=0; l<strlen(str[i]); ++l){
     
     //nadji 3 slova
     if(naso3==0){
       if(str[i][l]!='X'){
        for(j=l+1; j<strlen(str[i]); ++j){
          if(str[i][l]==str[i][j]){
            for(h=j+1; h<strlen(str[i]); ++h)
              if(str[i][j]==str[i][h]){
                //naso slovo koje se ponavlja 3 puta pa sva ista slova stavi na X
                for(u=0; u<strlen(str[i]); ++u){
                  if(str[i][u]==str[i][h]){
                    str[i][u]='X';
                  }
                }
                provjera3[i]=1;
                //printf("%c %c %c\n", str[i][l], str[i][j], str[i][h]);
                naso3=1;
                ++brojac3;
              }
            }
          }
        }
      }



      //nadji 2 slova
      if(naso2==0){
        if(str[i][j]!='X'){
          for(j=l+1; j<strlen(str[i]); ++j){
            if(str[i][l]==str[i][j]){
              provjera2[i]=1;
              //printf("%c %c\n", str[i][l], str[i][j]);
              naso2=1;
              ++brojac2;
              break;
            }
          }
        }
      }      
		}
	}

	printf("No. 2: %d\n", brojac2);
	printf("No. 3: %d\n", brojac3);

  brojac3=0;
  brojac2=0;

	for(int i=0; i<250; ++i){
    if(provjera2[i]>0 && provjera3[i]>0){
      brojac3++;
      provjera3[i]--;
    }
    else if(provjera2[i]>0){
			brojac2++;
      provjera2[i]--;
    }
	  else if(provjera3[i]>0){
			brojac3++;
      provjera3[i]--;
	  }

  }

	suma=brojac2*brojac3;
	printf("No. 2: %d\n", brojac2);
	printf("No. 3: %d\n", brojac3);
	printf("Sum: %d", suma);
	fclose(ul);
	return 0;
}