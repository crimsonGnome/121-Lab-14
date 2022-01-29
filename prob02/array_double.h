// Name: Joseph Eggers
// CWID: 885939488
// Email joseph.eggers

#ifndef _ARRAY_DOUBLE_H_
#define _ARRAY_DOUBLE_H_

#include <sstream>
#include <string>

class Exception {
 private:
  std::string message_;

 protected:
  Exception() : Exception("") {}

 public:
  Exception(const std::string &msg) : message_(msg) {}
  std::string GetMessage() const { return message_; }
  void SetMessage(const std::string &msg) { message_ = msg; }
};

class IndexOutOfRangeException : public Exception {
 public:
  IndexOutOfRangeException(int ix, int size) {
    std::stringstream ss;
    ss << "Invalid index " << ix << " for an array with " << size << " element"
       << (size == 1 ? "" : "s") << ". Value must be between 0 and " << size - 1
       << '.';
    SetMessage(ss.str());
  }
};

class InvalidArrayLengthException : public Exception {
 public:
  InvalidArrayLengthException(int x) {
    std::stringstream ss;
    ss << "Invalid number of elements( " << x
       << ") Value must be a positive integer";
    SetMessage(ss.str());
  }
};

class ArrayDouble {
 private:
  double *array_;
  int num_;

 public:
  ArrayDouble(int num);
  ~ArrayDouble();

  double &operator[](int ix) const;
  void Display() const;
};

#endif
