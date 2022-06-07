#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityAction_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_1_System_Boolean_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04737250, UnityAction_1_System_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::UnityAction_1_System_Boolean_ * this_ptr, bool arg0))
    IL2CPP_REGISTER_METHOD(0x02AC7490, app::IAsyncResult *, BeginInvoke, (app::UnityAction_1_System_Boolean_ * this_ptr, bool arg0, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_1_System_Boolean_ * this_ptr, app::IAsyncResult * result))
}
