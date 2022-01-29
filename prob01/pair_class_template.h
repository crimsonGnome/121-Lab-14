// Name: Joseph Eggers
// CWID 885939488
// email: joseph.eggers@csu.fullerton.edu

#include <iostream>

using std::cout;

template <class T>

class MyPair {
 private:
  T value1_;
  T value2_;

 public:
  // Constructor
  MyPair(T value1, T value2) {
    this->value1_ = value1;
    this->value2_ = value2;
  };

  // Getter
  T GetValue1() { return value1_; };
  T GetValue2() { return value2_; };

  // Member Function
  void Display() { cout << "[" << value1_ << ", " << value2_ << "]"; }
  void DisplayReverse() { cout << "[" << value2_ << ", " << value1_ << "]"; }
  T MaxValue() {
    if (value1_ > value2_) {
      return value1_;
    } else {
      return value2_;
    }
  }
  T MinValue() {
    if (value1_ < value2_) {
      return value1_;
    } else {
      return value2_;
    }
  }
  void SwapValue() {
    T temp = value1_;
    value1_ = value2_;
    value2_ = temp;
  }
};
