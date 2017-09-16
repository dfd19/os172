/* me: Dennis Febri Dien
 * NPM: 1606838193
 * Class: Operating System
 * Comment: calculate the power of some calue
 */
#define LOOP 2
#include <stdio.h>
void main() {

	int input = 9;
	int ii;
	int result = 1;
	for (ii=0; ii<LOOP; ii++){
		result = result * input;
	}
	printf("%d\n",result);
}
