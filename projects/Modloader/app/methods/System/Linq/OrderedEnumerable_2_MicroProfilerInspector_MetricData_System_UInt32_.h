#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumerableSorter_1_MicroProfilerInspector_MetricData_.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_UInt32_.h>
#include <Modloader/app/structs/IComparer_1_System_UInt32_.h>
#include <Modloader/app/structs/IEnumerable_1_MicroProfilerInspector_MetricData_.h>
#include <Modloader/app/structs/OrderedEnumerable_2_MicroProfilerInspector_MetricData_System_UInt32_.h>

namespace app::classes::System::Linq::OrderedEnumerable_2_MicroProfilerInspector_MetricData_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(
        0x02549E40,
        void,
        ctor,
        app::OrderedEnumerable_2_MicroProfilerInspector_MetricData_System_UInt32_* this_ptr,
        app::IEnumerable_1_MicroProfilerInspector_MetricData_* source,
        app::Func_2_MicroProfilerInspector_MetricData_UInt32_* key_selector,
        app::IComparer_1_System_UInt32_* comparer,
        bool descending
    )
    IL2CPP_REGISTER_METHOD(
        0x02549A40,
        app::EnumerableSorter_1_MicroProfilerInspector_MetricData_*,
        GetEnumerableSorter,
        app::OrderedEnumerable_2_MicroProfilerInspector_MetricData_System_UInt32_* this_ptr,
        app::EnumerableSorter_1_MicroProfilerInspector_MetricData_* next
    )
} // namespace app::classes::System::Linq::OrderedEnumerable_2_MicroProfilerInspector_MetricData_System_UInt32_
