#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_ArrowHitData_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ArrowHitData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_ArrowHitData_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_ArrowHitData_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0475B2D8, Func_2_ArrowHitData_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Func_2_ArrowHitData_Boolean_ * this_ptr, app::ArrowHitData arg))
    IL2CPP_REGISTER_METHODINFO(0x047817C0, Func_2_ArrowHitData_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02882950, app::IAsyncResult*, BeginInvoke, (app::Func_2_ArrowHitData_Boolean_ * this_ptr, app::ArrowHitData arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_2_ArrowHitData_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_ArrowHitData_Boolean_
