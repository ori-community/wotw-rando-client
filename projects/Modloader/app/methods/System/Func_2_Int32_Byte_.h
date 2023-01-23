#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_Int32_Byte_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_Int32_Byte_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Int32_Byte_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0472BCA0, Func_2_Int32_Byte___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010C4980, uint8_t, Invoke, (app::Func_2_Int32_Byte_ * this_ptr, int32_t arg))
    IL2CPP_REGISTER_METHOD(0x02F9EEB0, app::IAsyncResult*, BeginInvoke, (app::Func_2_Int32_Byte_ * this_ptr, int32_t arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, uint8_t, EndInvoke, (app::Func_2_Int32_Byte_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Int32_Byte_
