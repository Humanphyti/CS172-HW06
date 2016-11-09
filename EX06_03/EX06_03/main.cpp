#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){
    
    string search;
    
    int year = 2010;
    cout << "Enter the year from 2010-2014: ";
    cin >> year;
    cout << endl;
    switch (year){
        case 2010:
            ifstream fin;
            fin.open("Macintosh HD\\Users\\ebenschumann\\Documents\\Git Clone Repository\\CS172-HW06\\EX06_03\\Babynameranking2010.txt");
            if (fin.fail()){
                cout << "file cannot be opened right now for reading.\n";
            }
            char gender;
            cout << "Enter a gender (M) or (F):";
            cin >> gender;
            
            int rank;
            cout << "Enter a name: ";
            cin >> search;
            bool isFound = 0;
            while (!fin.eof())
            {
                string temp = "";
                getline(fin, temp);
                for (int i = 0; i < search.size(); i++)
                {
                    if (temp[i] == search[i])
                        isFound = 1;
                    else
                    {
                        isFound = 0;
                        break;
                    }
                }
                
                if (isFound)
                {
                    cout << search << " is ranked # " << rank << " in the year " << year << endl;
                    break;
                }
            }
            
            if (fin.eof() && (!isFound))
            {
                cout << "The name " << search << " is not ranked in the year " << year << "\n";
            }
            
            fin.close();
            
        case 2011:
            
            fin.open("Macintosh HD\\Users\\ebenschumann\\Documents\\Git Clone Repository\\CS172-HW06\\EX06_03\\Babynameranking2011.txt");
            if (fin.fail()){
                cout << "file cannot be opened right now for reading.\n";
                return 0;
            }

            cout << "Enter a gender (M) or (F):";
            cin >> gender;
            

            cout << "Enter a name: ";
            cin >> search;

            while (!fin.eof())
            {
                string temp = "";
                getline(fin, temp);
                for (int i = 0; i < search.size(); i++)
                {
                    if (temp[i] == search[i])
                        isFound = 1;
                    else
                    {
                        isFound = 0;
                        break;
                    }
                }
                
                if (isFound)
                {
                    cout << search << " is ranked # " << rank << " in the year " << year << endl;
                    break;
                }
            }
            
            if (fin.eof() && (!isFound))
            {
                cout << "The name " << search << " is not ranked in the year " << year << "\n";
            }
            
            fin.close();
            
        case 2012:
            
            fin.open("Macintosh HD\\Users\\ebenschumann\\Documents\\Git Clone Repository\\CS172-HW06\\EX06_03\\Babynameranking2012.txt");
            if (fin.fail()){
                cout << "file cannot be opened right now for reading.\n";
                return 0;
            }

            cout << "Enter a gender (M) or (F):";
            cin >> gender;
            

            cout << "Enter a name: ";
            cin >> search;

            while (!fin.eof())
            {
                string temp = "";
                getline(fin, temp);
                for (int i = 0; i < search.size(); i++)
                {
                    if (temp[i] == search[i])
                        isFound = 1;
                    else
                    {
                        isFound = 0;
                        break;
                    }
                }
                
                if (isFound)
                {
                    cout << search << " is ranked # " << rank << " in the year " << year << endl;
                    break;
                }
            }
            
            if (fin.eof() && (!isFound))
            {
                cout << "The name " << search << " is not ranked in the year " << year << "\n";
            }
            
            fin.close();
            
        case 2013:

  
            fin.open("Macintosh HD\\Users\\ebenschumann\\Documents\\Git Clone Repository\\CS172-HW06\\EX06_03\\Babynameranking2013.txt");
            if (fin.fail()){
                cout << "file cannot be opened right now for reading.\n";
                return 0;
            }

            cout << "Enter a gender (M) or (F):";
            cin >> gender;
            

            cout << "Enter a name: ";
            cin >> search;
            while (!fin.eof())
            {
                string temp = "";
                getline(fin, temp);
                for (int i = 0; i < search.size(); i++)
                {
                    if (temp[i] == search[i])
                        isFound = 1;
                    else
                    {
                        isFound = 0;
                        break;
                    }
                }
                
                if (isFound)
                {
                    cout << search << " is ranked # " << rank << " in the year " << year << endl;
                    break;
                }
            }
            
            if (fin.eof() && (!isFound))
            {
                cout << "The name " << search << " is not ranked in the year " << year << "\n";
            }
            
            fin.close();
            
        case 2014:
            
            
            fin.open("Macintosh HD\\Users\\ebenschumann\\Documents\\Git Clone Repository\\CS172-HW06\\EX06_03\\Babynameranking2014.txt");
            if (fin.fail()){
                cout << "file cannot be opened right now for reading.\n";
                return 0;
            }
           
            cout << "Enter a gender (M) or (F):";
            cin >> gender;
            
           
            cout << "Enter a name: ";
            cin >> search;
           
            while (!fin.eof())
            {
                string temp = "";
                getline(fin, temp);
                for (int i = 0; i < search.size(); i++)
                {
                    if (temp[i] == search[i])
                        isFound = 1;
                    else
                    {
                        isFound = 0;
                        break;
                    }
                }
                
                if (isFound)
                {
                    cout << search << " is ranked # " << rank << " in the year " << year << endl;
                    break;
                }
            }
            
            if (fin.eof() && (!isFound))
            {
                cout << "The name " << search << " is not ranked in the year " << year << "\n";
            }
            
            fin.close();
            
        default:
            cout << "That year is not available.\n";
            break;
    }
    
    return 0;
}
