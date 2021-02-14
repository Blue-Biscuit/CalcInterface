#include "Numeric.h"

std::unique_ptr<cc::Numeric> cc::Numeric::operator-(const Numeric& o) const
{
	return *this + *(-o);
}
