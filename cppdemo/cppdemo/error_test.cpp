#include "std_lib_facilities.h"
int main()
{
	try
	{
		error("����һ��error!");
		return 0;
	}
	catch (runtime_error& e)
	{
		cerr << "runtime error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}	
}