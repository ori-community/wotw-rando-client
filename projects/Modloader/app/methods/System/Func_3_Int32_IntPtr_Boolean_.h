#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_3_Int32_IntPtr_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_3_Int32_IntPtr_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02F42CF0, bool, Invoke, (app::Func_3_Int32_IntPtr_Boolean_ * this_ptr, int32_t arg1, void* arg2))
    IL2CPP_REGISTER_METHODINFO(0x0476A088, Func_3_Int32_IntPtr_Boolean__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_Int32_IntPtr_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FA5CD0, app::IAsyncResult*, BeginInvoke, (app::Func_3_Int32_IntPtr_Boolean_ * this_ptr, int32_t arg1, void* arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Func_3_Int32_IntPtr_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_3_Int32_IntPtr_Boolean_
