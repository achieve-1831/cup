#include <stdio.h>
#include "tree.h"

#define KRED "\x1B[31m" // red
#define KGRN "\x1B[32m" // green
#define KWHT "\x1B[37m" // white
#define KBLK "\x1B[30m" // black

bool test1()
{
	TREE_NODE* tree = init_tree(void);
  tree = add_node(tree, 9, 0);
  tree = add_node(tree, 5, 78);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 28, 80);
  TREE_NODE* tree = search(tree, 28);
  bool res;
  if (tree->value == 80)
     res = true;
  else res = false;
	destroy_tree(tree);
	return res;
}

bool test2()
{
	TREE_NODE* tree = init_tree(void);
  tree = add_node(tree, 9, 0);
  tree = add_node(tree, 5, 8);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 9, 0);
  tree = add_node(tree, 5, 8);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 9, 0);
  tree = add_node(tree, 5, 8);
  tree = add_node(tree, 2, 0);
  tree = add_node(tree, 9, 0);
  tree = add_node(tree, 5, 8);
  tree = add_node(tree, 29, 0);
  tree = delete_node(tree, 29);
  TREE_NODE* tree = search(tree, 29);
  bool res;
  if (tree->value == NULL)
         res = true;
  else res = false;
	destroy_tree(tree);
	return res;
}

bool test3()
{
	TREE_NODE* tree = init_tree(void);
  tree = add_node(tree, 9, 0);
  tree = add_node(tree, 5, 8);
  tree = add_node(tree, 2, 0);
  TREE_NODE* tree = search(tree, 5);
  bool res;
  if (tree->value == 8)
      res = true;
  else res = false;
	destroy_tree(tree);
	return res;
}

int main(void)
{
	printf("TEST #1 Create tree:\t\t%s%s\n", test1() ? KGRN"PASSED" : KRED"FAILED", KWHT);
	printf("TEST #2 Create tree:\t\t%s%s\n", test2() ? KGRN"PASSED" : KRED"FAILED", KWHT); // or KBLK
	printf("TEST #3 Remove element:\t\t%s%s\n", test3() ? KGRN"PASSED" : KRED"FAILED", KWHT);
	return 0;
}
