#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <Windows.h>

void SetString(char *p)
{
	if (p) 
		strcpy_s(p, 100, "hola mundo de plaida");
}
void PrintFloat(char* cadena, float valor)
{
	assert(cadena);
	assert(valor > 100 && valor < 500);
	sprintf_s(cadena, 100, "%s", valor);
}
int main(int argc, char** argv){

	char cadena[100];
	char* peptio = NULL;

	SetString(peptio);

	PrintFloat(cadena, 314.16f);

	printf("%s", cadena);

	//OutputDebugString 
	//Log, buscar per internet que es
	
		getchar(); 
}