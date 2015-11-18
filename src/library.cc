#include "src/library.h"

#include <iostream>

#include "glog/logging.h"

void Nike::Run() {
  LOG(INFO) << "NIKE";
  LOG(WARNING) << "debug nike";
  LOG(ERROR) << "error nike";

  std::cout << "WOW" << std::endl;
}
