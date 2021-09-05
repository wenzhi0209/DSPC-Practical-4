#include <omp.h>
#include <stdio.h>
#define NT 4
int mainsc() {
	int section_count = 0;
	omp_set_dynamic(0);
	omp_set_num_threads(NT);
#pragma omp parallel
#pragma omp sections
	{
#pragma omp section
		{
			section_count++;
			/* may print the number one or two */
			printf("section_count %d\n", section_count);
		}
#pragma omp section
		{
			section_count++;
			/* may print the number one or two */
			printf("section_count %d\n", section_count);
		}

	}
	return 0;

}
