#include "make_files.h"

/**
 * create_c_files - It creates C files.
 * @files: It's the number of files to create.
 *
 * Return: 0 on success, otherwise 1.
 */

int create_c_files(int files)
{
        char *filename, options[128];
	int tripper;

	filename = malloc(sizeof(char *));
	if (!filename)
	{
		puts("Not enough memory for this proccess.");
		return (1);
	}

	for (tripper = 0; tripper < files; tripper++)
	{
		printf("Type filename without .c extension → ");
		scanf("%s", filename);

		sprintf(options, "touch %s.c", filename);
		system(options);
	}

	free(filename);

	puts("\nYou've created these files:");
	sprintf(options, "ls -t | head -n %i | sort -f", files);
	system(options);

	return (0);
}
