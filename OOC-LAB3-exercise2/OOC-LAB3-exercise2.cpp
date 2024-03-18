#include <iostream>
using namespace std;
void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);

int main() {

	int marks1, marks2;
	cout << "Enter two assigment marks : ";
	cin >> marks1 >> marks2;

	float CA1, CA2;
	findMarks(marks1, marks2, CA1, CA2);

	float finalMarks;
	cout << "Enter final marks : ";
	cin >> finalMarks;

	float totalMarks;
	totalMarks = finalMarks + CA1 + CA2;

	cout << "Total marks : " << totalMarks << endl;

	return 0;
}

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2) {
	t_CA1 = t_marks1 * (20 / 100.0);
	t_CA2 = t_marks2 * (30 / 100.0);
}