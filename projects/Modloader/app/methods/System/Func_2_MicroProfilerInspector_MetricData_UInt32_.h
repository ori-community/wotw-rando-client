#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_UInt32_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_2_MicroProfilerInspector_MetricData_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_MicroProfilerInspector_MetricData_UInt32_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02884A00, uint32_t, Invoke, (app::Func_2_MicroProfilerInspector_MetricData_UInt32_ * this_ptr, app::MicroProfilerInspector_MetricData arg))
    IL2CPP_REGISTER_METHOD(0x02885780, app::IAsyncResult*, BeginInvoke, (app::Func_2_MicroProfilerInspector_MetricData_UInt32_ * this_ptr, app::MicroProfilerInspector_MetricData arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::Func_2_MicroProfilerInspector_MetricData_UInt32_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_MicroProfilerInspector_MetricData_UInt32_
