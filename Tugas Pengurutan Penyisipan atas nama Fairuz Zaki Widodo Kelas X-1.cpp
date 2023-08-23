#include <stdlib.h>
#include <iostream>

using namespace std;
void Insertion_Sort(int array[], int length);

int main()
{
	int i, n;
	cout << "Masukkan jumlah elemen yg diurutkan : ";
	cin >> n;
	int A[n];
	for(i = 0; i < n; i++)
	{
		cout<< "Masukkan bilangan ke-" << i+1 << " : ";
		 cin >> A[i];
	}
	Insertion_Sort(A, n);
	system("Pause");
    return 0;
}

void Insertion_Sort(int array[], int length)
{
	int i, J, key;
	for (i = 1; i < length; i++)
	{
		J = i;
		while (J > 0 && array[J - 1] > array[J])
		{
			key = array[J];
			array[J] = array[J - 1];
			array[J - 1] = key;
			J--;
		}
	}
	cout << "Hasil Pengurutan: ";
	for (J = 0; J < length; J++)
	{
		cout <<" "<< array[J];
	}
	cout << endl;
}
