#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_3_Object_Int32_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_3_Object_Int32_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FA6C20, app::Object*, Invoke, (app::Func_3_Object_Int32_Object_ * this_ptr, app::Object* arg1, int32_t arg2))
    IL2CPP_REGISTER_METHOD(0x02FA7150, app::IAsyncResult*, BeginInvoke, (app::Func_3_Object_Int32_Object_ * this_ptr, app::Object* arg1, int32_t arg2, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::Func_3_Object_Int32_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_3_Object_Int32_Object_
