//HW 2 9.11

class EvenNumber
{
private:
	int value; //integer value
public:	
	EvenNumber constructorZero() //Constructor begins with zero value
	{
		value = 0;
	}

	void val(int); //Although the book says for it to be a constructor, Visual Studio did not allow me to do that

	int getValue() //Gets the value of the object
	{
		return value;
	}
	int getNext()
	{
		if (value % 2 == 0) //checks to see if the value is even
		{
			return value + 2; //adds two if it is even
		}
		if (value == 0)
		{
			return value + 2; //if zero, add 2
		}
		else
		{
			return value + 1; //odd, add one
		}			
	}
	int getPrevious()
	{
		if (value % 2 == 0)
		{
			return value - 2;
		}
		if (value == 0)
		{
			return value - 2; 
		}
		else
		{
			return value - 1;
		}
	}
};

void EvenNumber::val(int i)
{
	value = i;
}
