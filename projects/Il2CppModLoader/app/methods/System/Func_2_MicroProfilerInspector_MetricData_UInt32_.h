#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Func_2_MicroProfilerInspector_MetricData_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_MicroProfilerInspector_MetricData_UInt32_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0478AF78, Func_2_MicroProfilerInspector_MetricData_UInt32___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02884A00, uint32_t, Invoke, (app::Func_2_MicroProfilerInspector_MetricData_UInt32_ * this_ptr, app::MicroProfilerInspector_MetricData arg))
    IL2CPP_REGISTER_METHOD(0x02885780, app::IAsyncResult *, BeginInvoke, (app::Func_2_MicroProfilerInspector_MetricData_UInt32_ * this_ptr, app::MicroProfilerInspector_MetricData arg, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::Func_2_MicroProfilerInspector_MetricData_UInt32_ * this_ptr, app::IAsyncResult * result))
}
