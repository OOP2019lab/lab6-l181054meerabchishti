// lab6.cpp : Defines the entry point for the console application.
//

#include "header.h"

int main()
{
	student s1;
	s1.addquizscore(10);
	s1.addquizscore(3);
	s1.addquizscore(7);
	s1.addquizscore(1);
	s1.print();
	student s2(4, 2);
	s2.addquizscore(9);
	s2.addquizscore(4);
	s2.addquizscore(6);
	s2.print();
	student s3(s1);
	s3.updateScore(0, 3);
	s3.updateScore(10, 3);
	s1.compare(s2);
	s3.setGPA(3.00);
	s3.print();
	s1.print();

	system("pause");
	return 0;
}

//*****ANSWERS
/*
here copy constructor was invoked when we did "student s3(s1);" and it was also invoked when compare function was called as the argument was passed as value

*/
/* DESTRUCTOR was invoked when the body of copy constructor ended also it was called after the main*/