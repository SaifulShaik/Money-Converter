#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    
    /*vector <char> vowels{'a', 'e', 'i', 'o', 'u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;*/
    
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(20);
    
    cout << "\nOriginal Vector 1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    cout << "The size of this vector is " << vector1.size() << " elements"<< endl;
    cout << "===============================================\n" << endl;
    
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nOriginal Vector 2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    
    cout << "\nThe size of this vector is " << vector2.size() << " elements"<< endl;
    cout << "===============================================\n" << endl;
    
    
    
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "Vector_2d" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    cout << "===============================================" << endl;
    
    vector1.at(0) = 1000;
    
    cout << "\nNew Vector 2d:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    cout << "\nVector 1:" << endl; 
    cout << vector1.at(0) << endl;  
    cout << vector1.at(1) << endl;  
    cout << "Vector 1 contans " << vector1.size() << " elements" << endl;
}
