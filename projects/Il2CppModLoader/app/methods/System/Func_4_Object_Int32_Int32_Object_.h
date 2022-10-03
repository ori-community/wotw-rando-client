#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_4_Object_Int32_Int32_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_4_Object_Int32_Int32_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FA7E60, app::Object*, Invoke, (app::Func_4_Object_Int32_Int32_Object_ * this_ptr, app::Object* arg1, int32_t arg2, int32_t arg3))
    IL2CPP_REGISTER_METHOD(0x02FA83D0, app::IAsyncResult*, BeginInvoke, (app::Func_4_Object_Int32_Int32_Object_ * this_ptr, app::Object* arg1, int32_t arg2, int32_t arg3, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::Func_4_Object_Int32_Int32_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_4_Object_Int32_Int32_Object_
