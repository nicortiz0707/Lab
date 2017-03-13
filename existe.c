#include <stdio.h>
#include <stdlib.h>
int len(char *sj){
	int i;
	int n=0;
	for(i=0;sj[i]!='\0';i++){
		n++;
	}
	return n;
}

int existe(char *s, char a){
	int i;
	int n = len(s);
	for(i=0;i<n;i++){
		if(s[i]==a){
			return 1;
		}
	}
	return 0;
}

int main(int argc, char* argv[]){
	printf("%i\n",existe(argv[1],argv[2][0]));
	return 0;
}