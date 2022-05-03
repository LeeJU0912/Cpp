#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i;
	double e, f;
	double m1;
	double m2;
	double a[5];
	double b[5];
	double c[5];
	double d[5];
	double sum = 0;
	double g;

	cout << "-------------------------------------" << '\n';
	cout << "대학물리실험 7. 뉴턴 2법칙 보고서" << '\n';
	cout << "-------------------------------------" << '\n';

	cout << "m1을 입력하세요 : ";
	cin >> m1;
	cout << "m2를 입력하세요 : ";
	cin >> m2;

	cout << '\n';

	for (i = 0; i < 3; i++) {
		cout << i + 1 << "회 - t3를 입력하세요 : ";
		cin >> c[i];
		cout << i + 1 << "회 - V1을 입력하세요 : ";
		cin >> a[i];
		cout << i + 1 << "회 - V2를 입력하세요 : ";
		cin >> b[i];

		cout << '\n';
		
		d[i] = (b[i] - a[i]) / c[i];
		sum += d[i];
	}

	cout << fixed;
	cout.precision(3);

	for (i = 0; i < 3; i++) {
		cout << i + 1 << "회 a값은 " << round(d[i] * 1000) / 1000 << " 입니다" << '\n';
	}
	sum = sum / 3;

	e = m2 / (m1 + m2) * 9.8;

	g = sum / (0.0225 / 1);

	cout << "\n실험 a의 평균은 " << round(sum * 1000) / 1000 << " 입니다" << '\n';

	cout << fixed;
	cout.precision(1);

	cout << "\n이론 a값은 " << round(e * 10) / 10 << " 입니다" << '\n';

	cout << fixed;
	cout.precision(0);

	cout << "\na값 오차는 " << round((e - sum) / e * 100) << "% 입니다" << '\n';

	cin >> f;
	return 0;
}