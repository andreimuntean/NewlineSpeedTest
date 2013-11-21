#include <fstream>

using namespace std;

void ENDL(unsigned long n)
{
    ofstream file;
    file.open("output.txt");
    for (unsigned long i = 1; i <= n; i++)
    {
        file << i << endl;
    }
}

void NEWLINE(unsigned long n)
{
    ofstream file;
    file.open("output.txt");
    for (unsigned long i = 1; i <= n; i++)
    {
        file << i << "\n";
    }
}

int main()
{
    NEWLINE(10000000);
    // ENDL(10000000);

    return 0;
}
