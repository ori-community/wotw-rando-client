#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_2_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Object_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0470D600, Action_2_Object_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::Action_2_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2))
    IL2CPP_REGISTER_METHODINFO(0x047836A8, Action_2_Object_Object__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::Action_2_Object_Object_ * this_ptr, app::Object * arg1, app::Object * arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Object_Object_ * this_ptr, app::IAsyncResult * result))
}
