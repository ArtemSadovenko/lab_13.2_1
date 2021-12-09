#include <conio.h>
#include <iostream>
#include <stdio.h>

#define F 7

#define SQR2(x) (x)*(x)

#define SQR3(x) (x)*(x)*(x)

#define MOD(x) abs(x)

#define MAX(x,y) (x>y)?x:y

#define MIN(x,y) (x<y)?x:y

#define REZ(x, y, z) (z>10)?MAX(SQR3(x), SQR2(x+y)):MIN(MOD(x-z),MOD(x+z))

#define PRINTI(x) puts("control output"); \
printf(#x"=%d\n",x)

using namespace std;

void main() {
	int x, y, z;
	char ch;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "z = "; cin >> z;
	do{
#if F == 7
	PRINTI(x);
	PRINTI(SQR2(x));
	PRINTI(SQR3(x));
	PRINTI(MAX(x, y));
	PRINTI(MIN(x, y));
	PRINTI(MOD(x));
	PRINTI(REZ(x, y, z));
#else
	PRINTI(REZ(x, y, z));
#endif
	puts("Repeat? y /n "); ch = _getch();
}	while (ch == 'y');
}