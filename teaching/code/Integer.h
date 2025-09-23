#include <iostream>
using namespace std;

class Integer {
	private:
		int m_i;
	public:
		// constructor
		Integer(int i);
		// overloading the + operator
		const Integer operator + (const Integer& right) const;
		// overloading the << operator, notice the difference between this one and the previous one
		friend ostream &operator<< (ostream &out, const Integer &I);
		// getter method, to obtain the status of the object
		int getIntValue();
};
