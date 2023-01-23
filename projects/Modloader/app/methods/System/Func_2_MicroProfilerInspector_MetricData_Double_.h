#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_MicroProfilerInspector_MetricData_Double_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/MicroProfilerInspector_MetricData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_MicroProfilerInspector_MetricData_Double_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_MicroProfilerInspector_MetricData_Double_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476F5E0, Func_2_MicroProfilerInspector_MetricData_Double___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02884330, double, Invoke, (app::Func_2_MicroProfilerInspector_MetricData_Double_ * this_ptr, app::MicroProfilerInspector_MetricData arg))
    IL2CPP_REGISTER_METHOD(0x02884930, app::IAsyncResult*, BeginInvoke, (app::Func_2_MicroProfilerInspector_MetricData_Double_ * this_ptr, app::MicroProfilerInspector_MetricData arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028818A0, double, EndInvoke, (app::Func_2_MicroProfilerInspector_MetricData_Double_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_MicroProfilerInspector_MetricData_Double_
