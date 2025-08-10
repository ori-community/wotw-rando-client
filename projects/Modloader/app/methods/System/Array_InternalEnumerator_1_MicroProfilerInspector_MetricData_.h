#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_MicroProfilerInspector_MetricData___Boxed.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_MicroProfilerInspector_MetricData_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, app::Array_InternalEnumerator_1_MicroProfilerInspector_MetricData___Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_MicroProfilerInspector_MetricData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_MicroProfilerInspector_MetricData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00163C80,
        app::MicroProfilerInspector_MetricData,
        get_Current,
        app::Array_InternalEnumerator_1_MicroProfilerInspector_MetricData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_MicroProfilerInspector_MetricData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00163CC0,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_InternalEnumerator_1_MicroProfilerInspector_MetricData___Boxed* this_ptr
    )
} // namespace app::classes::System::Array_InternalEnumerator_1_MicroProfilerInspector_MetricData_
