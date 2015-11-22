cc_library(
  name = "node",
  srcs = ["node.cc"],
  hdrs = ["node.h"],
  deps = ["//external:glog"]
)

cc_binary(
  name = "mains",
  srcs = ["main.cc"],
  deps = [":node"],
)

cc_test(
  name = "test_harness",
  srcs = ["test_main.cc"],
  copts = ["-Iexternal/gtest"],
  deps = [":node", "//external:gtest"]
)
