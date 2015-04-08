#include "queue.h" 
#include <iostream>


int main(void)
{
	MyQueue<char> test1;
	MyQueue<char> test2(3);
	test2.put('a');
	test2.put('b');
	test2.put('c');
	test1.put('d');
	test1.put('e');
	std::cout << test1.size() << test1.take() << test2.get(1) << std::endl;
	system("pause");
	return 0;
}
