#include <iostream>

using namespace std;

class Matrix
{
public:
	Matrix() {
		s1n1 = 0, s1n2 = 0, s2n1 = 0, s2n2 = 0;
	};

	int s1n1, s1n2, s2n1, s2n2;

};

ostream& operator<< (ostream& strm, Matrix matx) {
	strm << matx.s1n1 << " " << matx.s1n2 << "\n" << matx.s2n1 << " " << matx.s2n2 << endl;
	return strm;
}

istream& operator >> (istream& strm, Matrix &matx) {
	cout << "1s1n->\n";
	strm >> matx.s1n1;
	cout << "1s2n->\n";
	strm >> matx.s1n2;

	cout << "2s1n->\n";
	strm >> matx.s2n1;
	cout << "2s2n->\n";
	strm >> matx.s2n2;
	return strm;
}

int main()
{
    cout << "Write your matrix->\n\n";
	Matrix matx;
	cin >> matx;
	cout << endl;
	cout << matx;
}