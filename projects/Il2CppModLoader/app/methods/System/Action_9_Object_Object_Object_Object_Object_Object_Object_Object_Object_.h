#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C1BA30, void, Invoke, (app::Action_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::Object * arg3, app::Object * arg4, app::Object * arg5, app::Object * arg6, app::Object * arg7, app::Object * arg8, app::Object * arg9))
    IL2CPP_REGISTER_METHOD(0x0287AB80, app::IAsyncResult *, BeginInvoke, (app::Action_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::Object * arg3, app::Object * arg4, app::Object * arg5, app::Object * arg6, app::Object * arg7, app::Object * arg8, app::Object * arg9, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_9_Object_Object_Object_Object_Object_Object_Object_Object_Object_ * this_ptr, app::IAsyncResult * result))
}
