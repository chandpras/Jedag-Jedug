#include <windows.h>
#include <time.h>
using namespace std;

void warna_acak()
{
	int warna;
	srand(time(NULL));
	warna = rand() % 3 + 1;
	
	if(warna==1)
	{
		system("color 10");
		Sleep(50);
		system("color 50");
		Sleep(50);
		system("color 80");
		Sleep(50);
		system("color 30");
		Sleep(50);
		system("color 40");
		Sleep(50);
		system("color 90");
		Sleep(50);
		system("color 60");
		Sleep(50);
		system("color 20");
		Sleep(50);
		warna_acak();
	}
	else if(warna==2)
	{
		system("color 20");
		Sleep(50);
		system("color 30");
		Sleep(50);
		system("color 40");
		Sleep(50);
		system("color 80");
		Sleep(50);
		system("color 50");
		Sleep(50);
		system("color 90");
		Sleep(50);
		system("color 60");
		Sleep(50);
		system("color 10");
		Sleep(50);
		warna_acak();
	}
	else if(warna==3)
	{
		system("color 30");
		Sleep(50);
		system("color 90");
		Sleep(50);
		system("color 60");
		Sleep(50);
		system("color 40");
		Sleep(50);
		system("color 10");
		Sleep(50);
		system("color 20");
		Sleep(50);
		system("color 50");
		Sleep(50);
		system("color 80");
		Sleep(50);
		warna_acak();
	}
	
}

int main()
{
	warna_acak();
}
