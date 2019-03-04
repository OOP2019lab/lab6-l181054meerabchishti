#include "Header.h"

student::student()
{
	++counter;
	ID = counter;
	quizcapacity = 3;
	quiztaken = 0;
	GPA = -1;
	quizscore = new float[quizcapacity];
	for (int i = 0; i<quizcapacity; i++)
	{
		quizscore[i] = -1;
	}
	cout << "Default constructor was called for" << ID << endl;
}
student::student(int a, float b)
{
	++counter;
	ID = counter;
	quizcapacity = a;
	GPA = b;
	quiztaken = 0;
	quizscore = new float[quizcapacity];
	cout << "Parameterized constructor was called for" << ID << endl;
}
student::student(const student &a)
{
	cout << "Copy constructor was called for " << a.ID << endl;
	ID = a.ID;
	quizcapacity = a.quizcapacity;
	quiztaken = a.quiztaken;
	GPA = a.GPA;
	quizscore = new float[quizcapacity];
	for (int i = 0; i<a.quiztaken; i++)
	{
		quizscore[i] = a.quizscore[i];
	}

}
student::~student()
{
	delete[] quizscore;
	cout << "Destructor was called for" << ID << endl;
}
void student::addquizscore(int score)
{
	if (quiztaken <= quizcapacity)
	{
		quizscore[quiztaken] = score;
		quiztaken++;
	}
	else
		cout << "There's not enough capacity in the array" << endl;

}
void student::setGPA(float r)
{
	GPA = r;
}
float student::getGPA(float)
{
	return GPA;
}
void student::print()const
{
	cout << "ID :" << " " << ID << endl;
	cout << "GPA :" << " " << GPA << endl;
	cout << "quizzes taken :" << " " << quiztaken << endl;
	cout << "Score of quizzes taken are as follows:" << endl;
	for (int j = 0; j<quiztaken; j++)
	{
		cout << "quiz score " << " " << j + 1 << " " << quizscore[j] << " " << endl;

	}
}
bool student::compare(student h)
{
	if (h.GPA>GPA)
	{
		cout << "0" << endl;
		return true;
	}
	else

		return false;
}
void student::updateScore(int quizno, float score1)
{
	if (quizno <= quizcapacity)
	{
		quizscore[quizno] = score1;
		//quiztaken++;
	}
	else
	{
		if (quizno>quizcapacity)
		{
			cout << "THERE IS NOT ENOUGH SPACE IN THE ARRAY" << endl;
		}
		if (quizscore[quizno] = -1)
		{
			cout << "OR MAY BE THE QUIZ YOU ARE MENTIONING WAS NOT TAKEN" << endl;
		}
	}
}
int student::counter = 0;
