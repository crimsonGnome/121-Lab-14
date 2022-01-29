// Name: Joseph Eggers
// CWID: 885939488
// Email joseph.eggers

#include "array_double.h"

#include <iomanip>
#include <iostream>

using std::cout, std::fixed, std::setprecision;

// TODO(labex): Implement the ArrayDouble class' nondefault constructor
ArrayDouble::ArrayDouble(int num) : num_{0}, array_{nullptr} {
  if (num < 0) {
    throw InvalidArrayLengthException(num);
  } else {
    this->num_ = num;
    this->array_ = new double[num];
    for (int i = 0; i < num_; i++) {
      array_[i] = 0;
    }
  }
}
// TODO(labex): Impelment the ArrayDouble class' destructor
ArrayDouble::~ArrayDouble() { delete[] array_; }

// TODO(labex): Implement the ArrayDouble class' operator[] member function
//              (operator overloading)

double& ArrayDouble::operator[](int ix) const {
  if (ix >= num_ || ix < 0) {
    throw IndexOutOfRangeException(ix, num_);
  } else {
    return array_[ix];
  }
}

// TODO(labex): Implement the ArrayDouble class' Display() member function

void ArrayDouble::Display() const {
  if (num_ == 0) {
    cout << "Array is empty.";
  } else {
    for (size_t i = 0; i < num_; i++) {
      cout << fixed << setprecision(2) << array_[i] << " ";
    }
  }
}
