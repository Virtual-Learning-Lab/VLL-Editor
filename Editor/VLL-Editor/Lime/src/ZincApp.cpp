#include <VLL.h>

class Zinc : public VLL::Application
{
public:
	Zinc()
	{
	}

	~Zinc()
	{
	}
};

void main()
{
	Zinc* zinc = new Zinc();
	zinc->Run();
	delete zinc;
}