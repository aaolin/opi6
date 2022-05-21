///\file
#define n 20 ///<фиксированная переменная
#include <iostream> ///<заголовочный файл для огранизации ввода-вывода
#include <iomanip> ///<манипуляторы
using namespace std;

float** trans(float**, int);

/*!
*\brief класс opi
*класс создан для лабораторной работы номер 5 по опи
*\warning Данный класс создан только в учебных целях
*/

class opi{
    public:
    opi();
    ~opi();
};

int main() {
	setlocale(LC_ALL, "russian");
	float** res;
	cout << "Размерность матрицы " << n;
	float** d = new float* [n];
	for (int i = 0; i < n; i++)
		d[i] = new float[n];
	cout << "Введите матрицу " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> d[i][j];
	}
	res = trans(d, n);
}
/*!
*\brief Функция возвращает транспонированную матрицу
*\param  d - транспонируемая матрица
*\param  n - размер квадратной матрицы
*\return транспонированная матрица
*/
float** trans(float** d) {
	float** res = new float* [n];
	for (int i = 0; i < n; i++)
		res[i] = new float[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res[i][j] = d[j][i];
			cout << setw(4) << res[i][j];
		}cout << endl;
	}
	return res;
}