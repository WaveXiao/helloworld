#include <isostream>
using namespace
typedef struct
{
	int value;
	struct process *L;
}semaphore;

void P(semaphore s)
{
	s.value--;
	if(s.value < 0)
		block(s.L);
}

void V(semaphore s)
{
	s.value++;
	if(s.value <= 0)
		waveup(P);
}

void main()
{
	cout<<"hello github"<<end;

}
