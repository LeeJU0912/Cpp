#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int i;
	string f = "1";
	double e;
	double m1;
	double m2;
	double a[3];
	double b[3];
	double c[3];
	double d[3];
	double sum = 0;

	while (f != "0") {
		cout << "-------------------------------------" << '\n';
		cout << "대학물리실험 7. 뉴턴 2법칙 보고서 V2" << '\n';
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

		cout << fixed << setprecision(3);

		for (i = 0; i < 3; i++) {
			if (d[i] < 1) {
				cout << fixed << setprecision(4);
				cout << i + 1 << "회 a값은 " << d[i] << " 입니다" << '\n';
				cout << fixed << setprecision(3);
			}
			else {
				cout << i + 1 << "회 a값은 " << d[i] << " 입니다" << '\n';
			}

		}
		sum = sum / 3;

		e = m2 / (m1 + m2) * 9.8;

		if (sum < 1) {
			cout << fixed << setprecision(4);
			cout << "\n실험 a의 평균은 " << sum << " 입니다" << '\n';
		}
		else {
			cout << "\n실험 a의 평균은 " << sum << " 입니다" << '\n';
		}

		cout << fixed << setprecision(1);

		cout << "\n이론 a값은 " << e << " 입니다" << '\n';

		cout << fixed << setprecision(0);

		cout << "\na값 오차는 " << (e - sum) / e * 100 << "% 입니다" << '\n';

		cout << "\n아무 키나 입력하면 다시 시작됩니다." << '\n';
		cout << "0 을 입력하면 종료됩니다." << '\n';
		cout << "입력 (0을 입력하면 종료) : ";
		cin >> f;

		cout << '\n';
		cout << '\n';

		
	}

	return 0;
}