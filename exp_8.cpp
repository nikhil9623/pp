#include <iostream> 
#include <map> 
using namespace std; 
 
int main()  
{ 
    map<string, string> countryCurrency; 
 
    // Predefined data 
    countryCurrency.insert({"India", "Rupee"}); 
    countryCurrency.insert({"USA", "Dollar"}); 
    countryCurrency.insert({"Japan", "Yen"}); 
    countryCurrency.insert({"UK", "Pound"}); 
    countryCurrency.insert({"Germany", "Euro"}); 
 
    int choice; 
    string country, currency; 
 
    do { 
        cout << "\n--- Country-Currency Menu ---"; 
        cout << "\n1. Insert New Country"; 
        cout << "\n2. Display All"; 
        cout << "\n3. Find Country (using find())"; 
        cout << "\n4. Delete Country"; 
        cout << "\n5. Exit"; 
        cout << "\nEnter your choice: "; 
        cin >> choice; 
 
        switch(choice)  
        { 
            case 1: 
                cout << "Enter Country: "; 
                cin >> country; 
                cout << "Enter Currency: "; 
                cin >> currency; 
 
                countryCurrency[country] = currency; 
                cout << "Inserted Successfully!\n"; 
                break; 
 
            case 2: 
                cout << "\nCountry - Currency List:\n"; 
                for(auto it = countryCurrency.begin(); it != countryCurrency.end(); ++it)  
                { 
                    cout << it->first << " : " << it->second << endl; 
                } 
                break; 
 
            case 3: // FIND using iterator 
            { 
                cout << "Enter Country to Find: "; 
                cin >> country; 
 
                auto it = countryCurrency.find(country); 
 
                if(it != countryCurrency.end())  
                { 
                    cout << "Country Found!\n"; 
                    cout << "Currency: " << it->second << endl; 
                }  
                else  
                { 
                    cout << "Country Not Found!\n"; 
                } 
                break; 
            } 
 
            case 4: 
                cout << "Enter Country to Delete: "; 
                cin >> country; 
 
                if(countryCurrency.erase(country))  
                { 
                    cout << "Deleted Successfully!\n"; 
                }  
                else  
                { 
                    cout << "Country Not Found!\n"; 
                } 
                break; 
 
            case 5: 
                cout << "Exiting...\n"; 
                break; 
 
            default: 
                cout << "Invalid Choice!\n"; 
        } 
 
    } while(choice != 5); 
 
    return 0; 
} 
