
#include "Header.h"
void printarray(student arr);
void gpaarray(student arr, int size);
int main()
{
	student arr[3] = { student(3,2.0),student(3,3.0),student(4,2.33) };

	arr[0].addquizscore(1);
	arr[0].addquizscore(4);
	arr[0].addquizscore(10);
	arr[1].addquizscore(10);
	arr[1].addquizscore(4);
	arr[1].addquizscore(9);
	arr[2].addquizscore(9);
	arr[2].addquizscore(8);
	arr[2].addquizscore(7);

	printarray(arr[0]);
	printarray(arr[1]);
	printarray(arr[2]);
	gpaarray(arr[0], 3);
}
void printarray(student arr)
{
	arr.print();
}
void gpaarray(student arr, int size)
{
	student* ntemp = new student[size];

}