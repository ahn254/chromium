//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <unordered_map>
//   The container's value type must be the same as the allocator's value type

#include <unordered_map>

std::unordered_multimap<int, int, std::hash<int>, std::less<int>, std::allocator<long> > m;
  // expected-error-re@*:* {{{{(static_assert|static assertion)}} failed{{.*}}Allocator::value_type must be same type as value_type}}
