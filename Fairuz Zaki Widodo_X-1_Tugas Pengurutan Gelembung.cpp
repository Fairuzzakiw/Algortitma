#include <iostream>
#include <cstdlib>
using namespace std;

void Bubble_Sort(int A[], int n)
{
	int i, J, buffer;
	for(i = 0; i < n; i++)
	{
		for(J = 0; J < n-i-1; J++)
		{
			if( A[J] > A[J+1])
			{
				buffer = A[J];
				A[J] = A[J+1];
				A[J+1] = buffer;
			}
		}
	}
	cout<<("Hasil Pengurutan : ");
	for(i = 0; i < n; i++)
	{
		cout << A[i] << " ";
		
	}
}
int main()
{
	int i, n;
   cout << "Masukkan jumlah elemen yg akan diurutkan: ";
	cin>> n;
	int A[n];
	for(i = 0; i < n; i++)
	{
		cout<< "Masukkan bilangan ke-" << i+1 << " : ";
		 cin >> A[i];
	}
	Bubble_Sort(A, n);
	system("Pause");
	return 0;
}
