#include"bigstdio.h"


int main(void)
{
	//bigprintf("Hello, World!\nThis is bigprintf\nIt even\ntakes\nparameters!\n%c\n0x%X\n", 126, 8311999);

	FILE* testFile;
	errno_t err;

	err = fopen_s(&testFile, "mytestfile.txt", "w");

	bigfprintf(testFile, "Hello, File World!");
	
	if (testFile != NULL && !err)
	{
		fclose(testFile);
	}
	
	return 0;
}

