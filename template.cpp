#include <algorithm>
#include <iostream>
using namespace std;

template<class T> class ARRAY
{
	public:
		T _arr[4];

		ARRAY &operator= (T x[]) {
			for (int i = 0; i < 4; i++) {
				_arr[i] = x[i];
			}

			return *this;
		};

		ARRAY &operator= (ARRAY &x) {
			ARRAY tmp = *this;

			for (int i = 0; i < 4; i++) {
				tmp[i] += x[i];
			}

			return tmp;
		};

		T &operator[](int index) {
			return _arr[index];
		};
		const T &operator[](int index) const {
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
	float f[]={8.7, 1.2, 6.3, 1.1};
	ARRAY<float> arr;

	arr = f;

	cout << arr << endl;

	return 0;
}














