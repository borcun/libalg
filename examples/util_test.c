#include "util.h"

int main() {
	vector_t vec;

	vec = read_v( "vec.dat" );

	if( NULL != vec )
		print_v( vec );

	return 0;
}
