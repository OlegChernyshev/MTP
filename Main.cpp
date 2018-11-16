#pragma comment(lib , "lib/curl/libcurl.lib")

#include "Graphics.h"
#include "Mail.h"

int main() {
	Mail m = Mail();
	m.ExamplePrint();
	Graphics g = Graphics();
	g.ExampleCreateWindow();
	return 0;
}