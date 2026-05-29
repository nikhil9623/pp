
#include <iostream>
using namespace std;
// Function Declarations
void oddindexed(int a[], int n);
int sumofElements(int a[], int n);
void avgelements(int a[], int n);
void adddata(int a[], int &n, int pos, int data);
void deletedata(int a[], int &n, int pos);
// Function Definitions
void oddindexed(int a[], int n)
{
    cout << "Elements at odd index positions are:\n";
    for (int i = 1; i < n; i += 2)
    {
        cout << a[i] << " ";
    }
}
int sumofElements(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
void avgelements(int a[], int n)
{
    int sum = sumofElements(a, n);
    float avg = (float)sum / n;
    cout << "Average = " << avg << endl;
}
void adddata(int a[], int &n, int pos, int data)
{
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = data;
    n++;
}
void deletedata(int a[], int &n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void display(int a[], int n)
{
    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
// Main Function
int main()
{
    int a[100], n;
    int choice;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    do
    {
        cout << "\n-------MENU-------\n";
        cout << "1. Print Odd Index Elements\n";
        cout << "2. Sum of Elements\n";
        cout << "3. Average of Elements\n";
        cout << "4. Insert Element\n";
        cout << "5. Delete Element\n";
        cout << "6. Display Array\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            oddindexed(a, n);
            break;
        case 2:
            cout << "Sum = " << sumofElements(a, n) << endl;
            break;
        case 3:
            avgelements(a, n);
            break;
        case 4:
        {
            int pos, data;
            cout << "Enter position (0 to " << n << "): ";
            cin >> pos;
            cout << "Enter value to insert: ";
            cin >> data;
            if (pos >= 0 && pos <= n)
            {
                adddata(a, n, pos, data);
                cout << "Element inserted successfully.\n";
            }
            else
            {
                cout << "Invalid position!\n";
            }
            break;
        }
        case 5:
        {
            int pos;
            cout << "Enter position to delete (0 to " << n - 1 << "): ";
            cin >> pos;
            if (pos >= 0 && pos < n)
            {
                deletedata(a, n, pos);
                cout << "Element deleted successfully.\n";
            }
            else
            {
                cout << "Invalid position!\n";
            }
            break;
        }
        case 6:
            display(a, n);
            break;
        case 7:
            cout << "Exiting program\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 7);
    return 0;
}
