#include <stdio.h>
int main(){

	FILE *arch;
	
	arch = fopen("output.txt", "w");
	fwrite ("Hello, world!", sizeof(char), 13,arch); 
	fclose(arch);
	return 0;
}
