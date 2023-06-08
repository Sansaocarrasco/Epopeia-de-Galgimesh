#include <stdio.h>
#include <string.h>
int main(){
	char str[21]= {'a','l','o','e',' ','v','e','r','a'};
	char str0[21]= {'b','a','b','o','s','a'};
	char str1[21];
	int i,j;
	
	scanf("%20[^\n]", &str1);
	i = strcmp(str,str1);
	j = strcmp(str0, str1);
	if (!i)printf ("Planta da imortalidade\n");
	else if (!j)printf ("Planta da imortalidade\n");
	else printf ("Planta da nao-imortalidade\n");
	return 0;
}
