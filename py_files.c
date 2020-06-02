#include "make_files.h"

/**
 * create_py_files - It creates PYTHON files.
 * @files: It's the number of files to create.
 *
 * Return: 0 on success, otherwise 1.
 */

int create_py_files(int files)
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
		printf("Type filename without .py extension → ");
		scanf("%s", filename);

		sprintf(options, "touch %s.py", filename);
		system(options);
		sprintf(options, "echo \"#!/usr/bin/python3\" >> %s.py ; chmod u+x %s.py",
			filename,
			filename);
		system(options);
	}

	free(filename);

	puts("\nYou've created these files:");
	sprintf(options, "ls -t | head -n %i | sort -f", files);
	system(options);

	return (0);
}
