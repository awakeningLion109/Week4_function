#include <algorithm>
#include <iostream>
using namespace std;

class ARRAY
{
	public:
		int _arr[4];

		ARRAY &operator= (int x[]) {
			for (int i = 0; i < 4; i++) {
				_arr[i] = x[i];
			}

			return *this;
		};

		ARRAY operator+ (ARRAY &x) {
			ARRAY tmp = *this;

			for (int i = 0; i < 4; i++) {
				tmp[i] += x[i];
			}

			return tmp;
		};

		int &operator[](int index) {
			return _arr[index];
		};

		const int &operator[](int index) const {
			return _arr[index];
		};

		friend ostream &operator << (ostream &out, ARRAY a){
			for (int i = 0; i < 4; i++) {
				out << a[i] << endl;
			}
		};
};


int main(int argc, const char *argv[])
{
	int a[]={0, 1, 2, 3};
	ARRAY arr , brr;

	arr = a;
	brr = a;

	cout << arr + brr << endl;

	return 0;
}














