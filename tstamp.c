#include <stdio.h>
#include <time.h>

char buf[65536];
char ts[32];
struct tm* tm_info;

int main(int argc, char** argv) {
	time_t t;
	while(fgets(buf,sizeof(buf),stdin)!=NULL) {
		t=time(NULL);
		tm_info=localtime(&t);
		strftime(ts,32,"%Y-%m-%d %H:%M:%S",tm_info);
		fprintf(stdout,"%s: %s",ts,buf);
	}
}
