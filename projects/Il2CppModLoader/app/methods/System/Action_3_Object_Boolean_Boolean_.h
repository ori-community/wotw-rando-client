#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_3_Object_Boolean_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_3_Object_Boolean_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C14E40, void, Invoke, (app::Action_3_Object_Boolean_Boolean_ * this_ptr, app::Object * arg1, bool arg2, bool arg3))
    IL2CPP_REGISTER_METHOD(0x02C153B0, app::IAsyncResult *, BeginInvoke, (app::Action_3_Object_Boolean_Boolean_ * this_ptr, app::Object * arg1, bool arg2, bool arg3, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_3_Object_Boolean_Boolean_ * this_ptr, app::IAsyncResult * result))
}
