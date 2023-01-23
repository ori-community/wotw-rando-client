#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnumerableSorter_2_MicroProfilerInspector_MetricData_System_UInt32_.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_UInt32_.h>
#include <Modloader/app/structs/IComparer_1_System_UInt32_.h>
#include <Modloader/app/structs/EnumerableSorter_1_MicroProfilerInspector_MetricData_.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData__Array.h>

namespace app::classes::System::Linq::EnumerableSorter_2_MicroProfilerInspector_MetricData_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x0289C9B0, void, ctor, (app::EnumerableSorter_2_MicroProfilerInspector_MetricData_System_UInt32_ * this_ptr, app::Func_2_MicroProfilerInspector_MetricData_UInt32_* key_selector, app::IComparer_1_System_UInt32_* comparer, bool descending, app::EnumerableSorter_1_MicroProfilerInspector_MetricData_* next))
    IL2CPP_REGISTER_METHOD(0x0289CCD0, void, ComputeKeys, (app::EnumerableSorter_2_MicroProfilerInspector_MetricData_System_UInt32_ * this_ptr, app::MicroProfilerInspector_MetricData__Array* elements, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0289CE50, int32_t, CompareKeys, (app::EnumerableSorter_2_MicroProfilerInspector_MetricData_System_UInt32_ * this_ptr, int32_t index1, int32_t index2))
} // namespace app::classes::System::Linq::EnumerableSorter_2_MicroProfilerInspector_MetricData_System_UInt32_
