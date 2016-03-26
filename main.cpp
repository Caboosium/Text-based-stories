#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;

int start;
int quest;

void c()
{
system("CLS");
}

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main()
{

    while(start==0)
    {
    cout << "What story do you want to try?\n\n";
    cout << "1. Robbery\n";
    cout << "\nStory: ";
    cin >> quest;

    c();

        if(quest==1)
        {
        sleep(2000);
        cout << "\n\nCRASH!!!\n";
        sleep(2000);
        cout << "CRASH!!!\n";
        cout << "You: WhAt WAs ThAT!?";
        cout << "\n\n1. Get out of bed\n";
        cout << "2. Stay in bed\n\n: ";
        int a1;
        cin >> a1;
        }

        else
        {
        cout << "\n\nThat was not an option...";
        }
    cout << "\n\n\n\n";
    }
}
