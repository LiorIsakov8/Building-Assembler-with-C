#include "Header.h"

int main(int argc, char* argv[]) {
	all_commands_table commands_table[NumberOfCommands];
	handle_file("File.txt", commands_table);
	puts("");
	return 0;
}

/*
TO DO list Lior:.
6. delet the node in the label linked list that contains the "" label !!!!
7. make sure that everything's going well on the ubuntu.
8. delete this to do list :)

*/