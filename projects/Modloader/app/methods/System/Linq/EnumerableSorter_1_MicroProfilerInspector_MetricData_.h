#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/EnumerableSorter_1_MicroProfilerInspector_MetricData_.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Array.h>

namespace app::classes::System::Linq::EnumerableSorter_1_MicroProfilerInspector_MetricData_ {
    IL2CPP_REGISTER_METHOD(0x0289C130, app::Int32__Array*, Sort, (app::EnumerableSorter_1_MicroProfilerInspector_MetricData_ * this_ptr, app::MicroProfilerInspector_MetricData__Array* elements, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0289C270, void, QuickSort, (app::EnumerableSorter_1_MicroProfilerInspector_MetricData_ * this_ptr, app::Int32__Array* map, int32_t left, int32_t right))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EnumerableSorter_1_MicroProfilerInspector_MetricData_ * this_ptr))
} // namespace app::classes::System::Linq::EnumerableSorter_1_MicroProfilerInspector_MetricData_
