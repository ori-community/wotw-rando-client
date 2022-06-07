#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityAction_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::UnityAction_1_System_Int32_ * this_ptr, int32_t arg0))
    IL2CPP_REGISTER_METHODINFO(0x04721258, UnityAction_1_System_Int32__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_1_System_Int32_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02AC7550, app::IAsyncResult *, BeginInvoke, (app::UnityAction_1_System_Int32_ * this_ptr, int32_t arg0, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_1_System_Int32_ * this_ptr, app::IAsyncResult * result))
}
