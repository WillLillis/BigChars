#include"bigstdio.h"
#include<stdlib.h> // for rand()

int main(void)
{
	/*FILE* testFile;
	errno_t err;

	err = fopen_s(&testFile, "mytestfile.txt", "w");

	bigfprintf(testFile, "Hello, File World!");
	
	if (testFile != NULL && !err)
	{
		fclose(testFile);
	}*/

	char* test_buff;
	size_t test_buff_size;
	time_t t;

	srand((unsigned)time(&t));
	int num = rand() % 10000;

	const char buff[] = {"Hello, big buffer!\nParam %s\n%d"}; // format string we're going to print to test_buff
	test_buff_size = format_str_to_buff_size(buff, "testing", num); // grab the required size of test_buff

	assert(test_buff_size > 0); 
	test_buff = (char*)malloc(test_buff_size);
	assert(test_buff != NULL);

	int chars_printed = bigsnprintf(test_buff, test_buff_size, "Hello, big buffer!\nParam %s\n%d", "testing", num); // print the big chars to test_buff

	for (size_t i = 0; test_buff[i] != '\0'; i++) // print test_buff to the console to ensure the code worked properly
	{
		printf("%c", test_buff[i]);
	}

	bigprintf("\nchars_printed: %d\n", chars_printed); // testing the chars_printed return value as well
	
	if (test_buff != NULL)
	{
		free(test_buff);
	}
	bigprintf("Hello, big buffer!\nParam %s\n%d", "testing", num);
	
	return 0;
}

