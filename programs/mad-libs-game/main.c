#include <stdio.h>
#include <string.h>

int main()
{
	char adjective1[50], adjective2[50], adjective3[50] = "";
	char noun[50] = "";
	char verb1[50] = "";

	printf("Enter an adjective (description): ");
	fgets(adjective1, sizeof(adjective1), stdin);
	adjective1[strlen(adjective1) - 1] = '\0';

	printf("Enter a noun (animal/person): ");
	fgets(noun, sizeof(noun), stdin);
	noun[strlen(noun) - 1] = '\0';

	printf("Enter an adjective (description): ");
	fgets(adjective2, sizeof(adjective2), stdin);
	adjective2[strlen(adjective2) - 1] = '\0';

	printf("Enter a verb (ending w/ -ing): ");
	fgets(verb1, sizeof(verb1), stdin);
	verb1[strlen(verb1) - 1] = '\0';

	printf("Enter an adjective (description): ");
	fgets(adjective3, sizeof(adjective3), stdin);
	adjective3[strlen(adjective3) - 1] = '\0';

	printf("\n----------------------------*----------------------------\n");
	printf("Today I went to a %s to. \n", adjective1);
	printf("In an exhibit, I saw a %s. \n", noun);
	printf("%s was %s & %s! \n", noun, adjective2, verb1);
	printf("I was %s! \n", adjective3);

	return 0;
}