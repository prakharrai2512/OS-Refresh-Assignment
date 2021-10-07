#include <stdio.h>
#include<stdlib.h>


int main( int argc, char *argv[])  {
    if(argc!=2){
        printf("Wrong no. of arguments");
        return;
    }
    int numw,numr;
    FILE *f1, *f2;
    char buffer[100];
    f1=fopen(argv[1],"rb");
    f2=fopen(argv[2],"wb");
    while(feof(f1)==0){	
    printf("%d",numw);
	numr=fread(buffer,1,100,f1);
    numw=fwrite(buffer,1,numr,f2);
	if(numw!=numr){
		printf("error");
		exit(1);
	}
	}	
    fclose(f1);
	fclose(f2);
    return 0;
}