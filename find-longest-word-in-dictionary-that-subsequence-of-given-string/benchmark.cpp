//
// Created by willi on 05.03.20.
//

#include <benchmark/benchmark.h>
#include "lib/lib.h"

static void BM_myfunc(benchmark::State& state) {
  for (auto _ : state) {
    my_func("abppplee", {"able", "ale", "apple", "bale", "kangaroo"});
  }
}

BENCHMARK(BM_myfunc);

BENCHMARK_MAIN();