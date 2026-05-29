#include <iostream>
using namespace std;

class Arrayop
{
    int a[10];
    int n;

public:
    void read();
    void display();
    void oddindexed();
    int sumofElements();
    void avgofelements();
    void adddata(int pos, int data);
    void deletedata(int pos);
};

void Arrayop::read()
{
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Arrayop::oddindexed()
{
    cout << "Elements at odd index positions are:\n";

    for (int i = 1; i < n; i += 2)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

int Arrayop::sumofElements()
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

void Arrayop::avgofelements()
{
    int sum = sumofElements();
    float avg = (float)sum / n;

    cout << "Average = " << avg << endl;
}

void Arrayop::adddata(int pos, int data)
{
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = data;
    n++;
}

void Arrayop::deletedata(int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;
}

void Arrayop::display()
{
    cout << "Array elements are:\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main()
{
    Arrayop obj;

    obj.read();
    obj.display();

    obj.oddindexed();

    cout << "Sum of elements: " << obj.sumofElements() << endl;

    obj.avgofelements();

    obj.display();

    int pos, data;

    cout << "Enter position to insert : ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> data;

    obj.adddata(pos, data);

    obj.display();

    cout << "Enter position to delete : ";
    cin >> pos;

    obj.deletedata(pos);

    obj.display();

    return 0;
}