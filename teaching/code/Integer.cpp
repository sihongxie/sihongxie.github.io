#include "Integer.h"

Integer::Integer(int i) {
	m_i = i;
}

const Integer Integer::operator +(const Integer& right) const {
	// note that we're calling the constructor here
	// if you're a grade-A student, you should be able to tell the difference between m_i and right.m_i
	return Integer(m_i + right.m_i);
}

ostream &operator<< (ostream &out, const Integer &I) {
	out << I.m_i;
	return out;
}
int Integer::getIntValue() {
	return m_i;
}
