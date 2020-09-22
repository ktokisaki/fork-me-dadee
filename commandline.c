// FROM 0x266 COMMAND-LINE ARGUMENTS
#include <stdio.h>

// yes, it's a comment from aj
int main(int arg_count, char *arg_list[]) {
	printf("There were %d arguments provided.\n", arg_count);
	for(int i = 0; i < arg_count; i++){
		printf("argument #%d\t-\t%s\n", i, arg_list[i]);
	}
	return 0;
	//added comment by ktokisaki
	//added another comment here by aj
}
