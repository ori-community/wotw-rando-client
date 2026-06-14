#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OrderedEnumerable_1_TElement_GetEnumerator_d_1_MicroProfilerInspector_MetricData_.h>

namespace app::classes::System::Linq::OrderedEnumerable_1_TElement___GetEnumerator_d__1_MicroProfilerInspector_MetricData_ {
    IL2CPP_REGISTER_METHOD(
        0x01D09710,
        void,
        ctor,
        app::OrderedEnumerable_1_TElement_GetEnumerator_d_1_MicroProfilerInspector_MetricData_* this_ptr,
        int32_t __1__state
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        IDisposable_Dispose,
        app::OrderedEnumerable_1_TElement_GetEnumerator_d_1_MicroProfilerInspector_MetricData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02548B40, bool, MoveNext, app::OrderedEnumerable_1_TElement_GetEnumerator_d_1_MicroProfilerInspector_MetricData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02548CE0,
        app::MicroProfilerInspector_MetricData,
        System_Collections_Generic_IEnumerator_TElement__get_Current,
        app::OrderedEnumerable_1_TElement_GetEnumerator_d_1_MicroProfilerInspector_MetricData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02548D10,
        void,
        IEnumerator_Reset,
        app::OrderedEnumerable_1_TElement_GetEnumerator_d_1_MicroProfilerInspector_MetricData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02548D60,
        app::Object*,
        IEnumerator_get_Current,
        app::OrderedEnumerable_1_TElement_GetEnumerator_d_1_MicroProfilerInspector_MetricData_* this_ptr
    )
} // namespace app::classes::System::Linq::OrderedEnumerable_1_TElement___GetEnumerator_d__1_MicroProfilerInspector_MetricData_
