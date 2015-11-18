#include <iostream>

#include "glog/logging.h"

#include "src/library.h"

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  Nike nike;
  nike.Run();
  return 0;
}
