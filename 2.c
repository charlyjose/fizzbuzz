
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[10];
	char sbstr[10];
	int j=0, x=0, k=-1, c=0;
	
	scanf("%s", &str);
	scanf("%s", sbstr);
	
	int len = strlen(str);
	int sLen = strlen(sbstr);
	
	//printf("%s %s", str, sbstr);
		
	for(int i=0; i<=len; i++) {
		if(str[i]==sbstr[0]) {
			k=++i;
			for(j=1; j<=sLen; j++) {
				if(str[i++]==sbstr[j]) {
					//okay
					c++;
				}
				else {
					c=0;
					i=k;
					k=-1;
					break;	
				}
			}		
		}
	}
	if(c==sLen) {
		printf("%d\n", k);
	}
	return 0;
}
