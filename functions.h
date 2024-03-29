#include "structures.h"


n * add_node(char * str, n * down, n * right);
n * grow_right(n * left, n * right);
n * add_node_to_list    (n * head, char * str, n * down, n * right);
n * add_node_to_list_beggining(n * head, char * str, n * down, n * right);
n * correct_type(n * head, char * str);
n * set_type (n * head, char * _str);
n * add_to_end_of_list (n * head, n * to_add);
void print_tree(n * head, int dots);
void print_node_from_tree(n * head, int dots);
void print_node(n * node);
int need_to_create_block(n * head);


void print_dec(n* head, int dots);
void print_func_body(n * head, int dots);

n * create_node(char * _str, n * _down, n * _right, int line, int col); // MEta 3
