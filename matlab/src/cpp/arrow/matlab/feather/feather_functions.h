// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#pragma once

#include <mex.h>

#include "arrow/matlab/api/visibility.h"

namespace arrow {
namespace matlab {
namespace feather {

ARROW_MATLAB_EXPORT void featherwrite(int nlhs, mxArray* plhs[], int nrhs, const mxArray* prhs[]);

ARROW_MATLAB_EXPORT void featherread(int nlhs, mxArray* plhs[], int nrhs, const mxArray* prhs[]);

}  // namespace feather
}  // namespace matlab
}  // namespace arrow
