#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

void swap(int& arr1, int& arr2);
void show_array(unsigned int arr[], const unsigned int SIZE);

int main()
{
    static const unsigned int SIZE = 3; //размер массива
    unsigned int array [SIZE]; //инициализация массива
    int interval = 0 + 100; //интервал для генерирумых случайных значений

    for (int i = 0; i < SIZE; i++)
    array[i] = rand()%interval;
    
    cout << setw(20) << "Original array: \n";
    show_array(array, SIZE);

    for (int j = 0; j < SIZE-1; j++)
    {
        if ( array[j] < array[j+1] )


            {
            swap(array[j], array[j+1]);
            if (j >= 1)
            j -= 2; //hindicode but w o r k i n g
            }
    }

    cout << setw(20) << "Sorted array: \n";
    show_array(array, SIZE);
    return 0;
}


void swap(int& arr1, int& arr2)
{
    int temp = arr1;
    arr1 =  arr2;
    arr2 = temp;
}

void show_array(unsigned int arr[], unsigned int SIZE)
{
    for (int k = 0; k < SIZE-1; k++)
    cout << setw(3) << arr[k] << ", ";
    cout << setw(3) << arr[SIZE-1] << "\n";
}