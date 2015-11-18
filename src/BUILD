cc_library(
  name = "my_lib",
  srcs = ["library.cc"],
  hdrs = ["library.h"],
  deps = ["//external:glog"]
)

cc_binary(
  name = "mains",
  srcs = ["main.cc"],
  deps = [":my_lib"],
)

cc_test(
  name = "test_harness",
  srcs = ["my_test.cc"],
  deps = ["@gtest//:main"],
)
