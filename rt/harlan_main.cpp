#include <inttypes.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

extern int ARGC;
extern char **ARGV;

// Generated by Harlan compiler
extern int harlan_main();

// in harlan.cpp
extern uint64_t g_memtime;

int main(int argc, char **argv) {
	ARGC = argc;
	ARGV = argv;

    int result = harlan_main();

    cout << "JITTIME: " << double(g_memtime) / 1e9 << endl;

    return 1;

    //return result;
}
