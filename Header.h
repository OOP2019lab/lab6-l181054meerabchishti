#include<iostream>
using namespace std;

class student
{
private:
	static int counter;//to keep track of number of students
	int ID;
	//each ID will have unique ID
	float *quizscore;//array to keep score of quizzes
	int quizcapacity;//capacity of quizzScore array
	int quiztaken;//number of quizzes taken
	float GPA;
public:
	student();
	//default constructor
	student(int, float);
	//take quizcapacity and GPA as argument
	student(const student &);
	//copy constructor 
	~student();
	//destructor
	void addquizscore(int);
	//to add score tro quizscore array and display error if the array bis full
	void setGPA(float);
	//to set the GPA
	float getGPA(float);
	//to return GPA
	void print()const;
	//this will print all the information regarding that student
	bool compare(student);
	//this will take another student and compare it
	void updateScore(int, float);
	//this gives a new score and update it in the array


}; 
