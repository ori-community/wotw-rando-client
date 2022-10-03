#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_2_MicroProfilerInspector_MetricData_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_MicroProfilerInspector_MetricData_Int32Enum_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02884A00, app::Int32Enum__Enum, Invoke, (app::Func_2_MicroProfilerInspector_MetricData_Int32Enum_ * this_ptr, app::MicroProfilerInspector_MetricData arg))
    IL2CPP_REGISTER_METHOD(0x02884FF0, app::IAsyncResult*, BeginInvoke, (app::Func_2_MicroProfilerInspector_MetricData_Int32Enum_ * this_ptr, app::MicroProfilerInspector_MetricData arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::Int32Enum__Enum, EndInvoke, (app::Func_2_MicroProfilerInspector_MetricData_Int32Enum_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_MicroProfilerInspector_MetricData_Int32Enum_
