#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	int i;
	double a[5];
	double b[5];
	double c[5];
	double sum = 0;
	double g;

	cout << "-------------------------------------" << '\n';
	cout << "대학물리실험 5. 중력가속도측정 보고서" << '\n';
	cout << "-------------------------------------" << '\n';

	for (i = 0; i < 5; i++) {
		cout << i + 1 << "회 - v1을 입력하세요 : ";
		cin >> a[i];
		cout << i + 1 << "회 - v2를 입력하세요 : ";
		cin >> b[i];
		c[i] = ((b[i] * b[i]) - (a[i] * a[i])) / 1.6;
		sum += c[i];
	}
	cout << "\n" << '\n';

	for (i = 0; i < 5; i++) {
		cout << i + 1 << "회 a값은 " << round(c[i] * 10000) / 10000 << " 입니다" << '\n';
	}
	sum = sum / 5;

	g = sum / (0.0225 / 1);

	cout << "\na의 평균은 " << round(sum * 10000) / 10000 << " 입니다" << '\n';

	cout << "\ng의 실험값은 " << round(g * 1000) / 1000 << " 입니다" << '\n';

	_getch();
	return 0;
}