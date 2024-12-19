#include <iostream>
#include <memory>

void bad() {
  int n1 = 2;
  int *pn1 = &n1;
  std::cout << "bad\n" << pn1 << std::endl;
}

void good() {
  int *pn1 = new int(2);
  std::cout << "good\n" << &pn1 << std::endl;
  free(pn1);
}

void better() {
  std::unique_ptr<int> upn1 = std::make_unique<int>(2);
  std::cout << "better\n" << *upn1 << std::endl;
}

int main() {
  bad();    // memory leak
  good();   // freeing pointer
  better(); // unique pointer will do it for us.
  return 0;
}
