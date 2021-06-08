#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int main()
{
    // Part I
    cout << setw(35) << "Income versus GPA\n" << endl;
    cout << setw(15) << "Name";
    cout << setw(15) << "Income";
    cout << setw(15) << "GPA\n\n";
    cout << setw(15)<< "Jamie";
    cout << setw(15)<< "12300.00";
    cout << setw(15)<< "3.4\n\n";
    cout << setw(15)<< "Linda";
    cout << setw(15)<< "14500";
    cout << setw(15)<< "3.92\n\n";
    cout << setw(15)<< "Bob";
    cout << setw(15)<< "9400";
    cout << setw(15)<< "3.12\n\n";
    cout << setw(15)<< "Marie";
    cout << setw(15)<< "15129.00"; 
    cout << setw(15)<< "4\n\n\n";
    cout << "** End of Report 1 ** \n\n";

    //Part 2
    cout << setw(35) << "Income versus Age\n" << endl;
    cout << setw(15) << "Name";		
    cout << setw(15) << "Income";	
    cout << setw(15) << "Age\n\n";
    cout << setw(15) << "Jamie";
    cout << setw(15) << "12300.00";
    cout << setw(15) << "19\n\n";
    cout << setw(15) << "Linda";
    cout << setw(15) << "4500";
    cout << setw(15) << "22\n\n";
    cout << setw(15) << "Bob";
    cout << setw(15) <<	"9400";
    cout << setw(15) <<	"21\n\n";
    cout << setw(15) << "Frank";
    cout << setw(15) << "19129.00";
    cout << setw(16) <<  "51\n\n\n";
    cout << "** End of Report 2 ** \n\n";

    return 0;
}