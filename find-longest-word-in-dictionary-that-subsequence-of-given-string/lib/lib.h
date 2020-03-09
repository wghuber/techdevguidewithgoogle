//
// Created by willi on 05.03.20.
//

#ifndef LIB_H
#define LIB_H

#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

inline std::string my_func(const std::string& s, const std::vector<std::string>& d) {
  if (d.size() == 0) {
    return "";
  }

  using IterT = decltype(d[0].cbegin());
  using DiffT = IterT::difference_type;
  std::vector<IterT> b_iters;
  std::vector<IterT> c_iters;
  std::vector<IterT> e_iters;

  for (const auto& word : d) {
    b_iters.push_back(word.cbegin());
    c_iters.push_back(word.cbegin());
    e_iters.push_back(word.cend());
  }

  for (const char& current: s) {
    for(std::size_t current_pos = 0; current_pos < d.size(); ++current_pos) {
      if (c_iters.at(current_pos) != e_iters.at(current_pos) && *(c_iters.at(current_pos)) == current) {
        ++c_iters.at(current_pos);
      }
    }
  }

  DiffT max_diff = 0;
  std::size_t max_pos = 0;

  for(std::size_t current_pos = 0; current_pos < d.size(); ++current_pos) {
    const DiffT current_diff = std::distance(b_iters.at(current_pos), c_iters.at(current_pos));

    if (c_iters.at(current_pos) == e_iters.at(current_pos) && current_diff > max_diff) {
      max_diff = current_diff;
      max_pos = current_pos;
    }
  }

  return d.at(max_pos);
}

#endif  // LIB_H
