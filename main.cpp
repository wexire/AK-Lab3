#include <iostream>
#include "calculator.h"

using namespace std;

int main(int argc, char *argv[])
{
	Calculator calc;
	
	if (argc == 2) {
		cout<<argv[1]<<" * 2 = "<<calc.Double(atof(argv[1]))<<endl;
	} else if (argc == 3) {
		cout<<argv[1]<<" + "<<argv[2]<<" = "<<calc.Add(atof(argv[1]), atof(argv[2]))<<endl;
	}
	
	return 0;
}
