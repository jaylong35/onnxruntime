// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <pybind11/iostream.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "core/common/logging/logging.h"
#include "core/common/logging/sinks/clog_sink.h"
#include "core/common/logging/sinks/cerr_sink.h"
#include "core/framework/allocatormgr.h"
#include "core/framework/environment.h"
#include "core/framework/ml_value.h"
#include "core/session/inference_session.h"


using namespace std;
namespace onnxruntime {
namespace python {

namespace py = pybind11;

int OnnxRuntimeTensorToNumpyType(const MLDataType& tensor_type);

void CreateGenericMLValue(AllocatorPtr alloc, const std::string& name_input, py::object& value, MLValue* p_mlvalue);

}  // namespace python
}  // namespace onnxruntime
