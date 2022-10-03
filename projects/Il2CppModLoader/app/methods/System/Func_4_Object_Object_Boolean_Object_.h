#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Func_4_Object_Object_Boolean_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_4_Object_Object_Boolean_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FA84B0, app::Object*, Invoke, (app::Func_4_Object_Object_Boolean_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, bool arg3))
    IL2CPP_REGISTER_METHOD(0x02FA8A40, app::IAsyncResult*, BeginInvoke, (app::Func_4_Object_Object_Boolean_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, bool arg3, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::Func_4_Object_Object_Boolean_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_4_Object_Object_Boolean_Object_
