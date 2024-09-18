#include <iostream>
#include <cmath>


using namespace std;

bool IsPrime(int number) {
	if (number < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(number); i++) {
		if ((number % i) == 0) {
			return false;
		}
	}
	return true;
}

void Prime41() {
	int prime;
	cout << "Primes from n^2 + n + 41: " << endl;
	for (int i = 0; i < 40; i++) {
		prime = i * i;
		prime += i;
		prime += 41;
		cout << "Prime " << i << ": " << prime << endl;
	}
}

void Prime1601() {
	int prime;
	cout << "Primes from n^2 - 79n + 1601: " << endl;
	for (int i = 0; i < 80; i++) {
		prime = i * i;
		prime += 79 * i;
		prime += 1601;
		cout << "Prime " << i << ": " << prime << endl;
	}
}

void EquationFinder() {
	int count = 0, aBest = 0, bBest = 0;
	for (int a = -999; a <= 999; a++) {
		for (int b = -1000; b <= 1000; b++) {
			int n = 0;
			while (IsPrime(n*n + a*n + b)) {
				n++;

				if (count < n) {
					count = n;
					aBest = a;
					bBest = b;
				}
			}
		}
	}
	cout << "Best a: " << aBest << endl;
	cout << "Best b: " << bBest << endl;
	cout << "Total Count: " << count << endl;
}

int main()
{

	Prime41();
	cout << endl;
	Prime1601();
	cout << endl;

	EquationFinder();
	return 0;
}
