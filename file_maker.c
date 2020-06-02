#include "make_files.h"

/**
 * main - It's the main function for files creating.
 *
 * Return: 0 on success, otherwise 1.
 */

int main(void)
{
	int files = 0, option, bool;

	puts("Select type of file: ");
	printf("→ C File [0]\n→ BASH File [1]\n→ PYTHON File [2]\n>>> ");
	scanf("%d", &option);

	switch(option)
	{
	case 0:
		printf("Type quantity of files to create → ");
		scanf("%i", &files);
		bool = create_c_files(files);
		break;
	case 1:
		printf("Type quantity of files to create → ");
		scanf("%i", &files);
		bool = create_sh_files(files);
		break;
	case 2:
		printf("Type quantity of files to create → ");
		scanf("%i", &files);
	        bool = create_py_files(files);
		break;
	default:
		puts("An error has occurred");
		bool = 1;
		break;
	}

	return (bool);
}
