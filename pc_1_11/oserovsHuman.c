#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void swap(char** s1, char** s2){
        char* tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int main(){
        char str[100];
        char** ppnum;
        char* pnum;
	char num;
        int i,j;

        ppnum=&pnum;
		pnum=&num;
		ppnum=(char **)malloc(5);

        for (i=0;i<5;i++){
                printf("Input Name:");
                scanf("%s",str);
                *(ppnum+i) = (char *)malloc(sizeof(char)*(strlen(str)+1));
                strcpy(*(ppnum+i),str);
        }

        /*for (i=0;i<5;i++){
                for (j=i+1;j<5;j++){
                        if (strcmp(*(ppnum+i), *(ppnum+j)) >= 1){
                                swap((ppnum+i), (ppnum+j)) ;               
                        }
                }
        }*/

        for(i=0;i<5;i++){
			for(j=0;j<sizeof(char)*(strlen(str)+1);j++){
				if(*(*(ppnum+i)+j)=='K'){
					*(*(ppnum+i)+j)='S';
				}
			}
			printf("%s\n",*(ppnum+i));
        }
        return 0;
} 