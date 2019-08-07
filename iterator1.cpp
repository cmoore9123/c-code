#include <iterator>

#include <vector>

#include <iostream>

using namespace std;

 

int main()

{

    int i;

    vector<int> vec;

    for(i = 1; i < 5; ++i)

        vec.push_back(i);

    vector <int>::iterator vecIter;

    cout<<"The vector vec data: ";

    for(vecIter = vec.begin(); vecIter != vec.end(); vecIter++)

        cout<<*vecIter<<" ";

    cout<<endl;

    // insertions using template function

    back_insert_iterator<vector<int> > backiter(vec);

    *backiter = 11;

    backiter++;

    *backiter = 9;

    backiter++;

    *backiter = 27;

    cout<<"\nOperation: *backiter = 11 then backiter++...\n";

    cout<<"New vector vec data: ";

    for(vecIter = vec.begin(); vecIter != vec.end(); vecIter++)

        cout<<*vecIter<<" ";

    cout<<endl;

    cout<<"\nOperation: back_inserter(vec) = 21...\n";

    // alternatively, insertions using the back_inserter() member function

    back_inserter(vec) = 21;

    back_inserter(vec) = 17;

    back_inserter(vec) = 33;

    cout<<"New vector vec data: ";

    for(vecIter = vec.begin(); vecIter != vec.end(); vecIter++)

        cout<<*vecIter<<" ";

    cout<<endl;

    return 0;

}