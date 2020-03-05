cc_library(
    name = "lib",
    hdrs = ["lib/lib.h"],
)

cc_test(
    name = "test",
    srcs = ["test.cpp"],
    deps = [
        "@gtest//:gtest_main",
        ":lib",
    ],
)

cc_test(
    name = "benchmark",
    srcs = ["benchmark.cpp"],
    deps = [
        "@benchmark//:benchmark_main",
        ":lib",
    ],
)
