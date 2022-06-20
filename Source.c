#include"bigstdio.h"


int main(void)
{
	//bigprintf("Hello, World!\nThis is bigprintf\nIt even\ntakes\nparameters!\n%c\n0x%X\n", 126, 8311999);

	/*FILE* testFile;
	errno_t err;

	err = fopen_s(&testFile, "mytestfile.txt", "w");

	bigfprintf(testFile, "Hello, File World!");
	
	if (testFile != NULL && !err)
	{
		fclose(testFile);
	}*/

	char* test_buff;
	size_t test_buff_size = 2000;
	size_t how_far = 0;

	test_buff = (char*)malloc(test_buff_size);
	int chars_printed;

	assert(test_buff != NULL);

	chars_printed = bigsnprintf(test_buff, test_buff_size, "Hello, Buffer!");

	for (size_t i = 0; test_buff[i] != '\0'; i++)
	{
		printf("%c", test_buff[i]);
	}

	printf("\nchars_printed: %d\n", chars_printed);
	
	if (test_buff != NULL)
	{
		free(test_buff);
	}
	
	return 0;
}

