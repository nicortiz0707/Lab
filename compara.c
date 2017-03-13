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

char compara(char *s1, char *s2){
	int i;
	for(i=0;i<len(s1);i++){
		if(s1[i]>s2[i]){
			return'<';
		}else{
			if(s1[i]<s2[i]){
				return '>';
			}
		}
	}
	return '=';
}
int main(int argc, char* argv[]){
	char *cad1 = argv[1];
	char *cad2 = argv[2];
	printf("%c\n",compara(cad1,cad2));
	return 0;
}