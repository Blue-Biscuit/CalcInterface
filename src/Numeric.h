#pragma once

//	STDLIB INCLUDES

#include <memory>

//	LIB INCLUDES

#include "Solution/Solution.h"
#include "Solution/Solvable.h"

namespace cc
{
	//	Abstract class for a numeric expression, allowing for
	//	polymorphic numbers.
	class Numeric : Solvable
	{
	public:
	//	UNARY OPERATORS

		virtual std::unique_ptr<Numeric> operator-() const = 0;

	//	ARITHMETIC OPERATORS

		virtual std::unique_ptr<Numeric> operator+(const Numeric&) const = 0;
		virtual std::unique_ptr<Numeric> operator-(const Numeric&) const;
		virtual std::unique_ptr<Numeric> operator*(const Numeric&) const = 0;
		virtual std::unique_ptr<Numeric> operator/(const Numeric&) const = 0;
	};
}