#include <iostream>
#include "abtree.h"

int main(int argc, char ** argv) {
	abtree/*<int, std::string>*/ tree(2, 3);
	tree.insert(std::make_pair(5, std::string("foo")));
	tree.insert(std::make_pair(6, std::string("foobar")));
	tree.insert(std::make_pair(10, std::string("foovaz")));
	std::cout << tree.size() << std::endl;
	std::cout << tree.find(5)->second << std::endl;
	std::cout << tree.find(6)->second << std::endl;
	std::cout << tree.find(10)->second << std::endl;
	return 0;
}
