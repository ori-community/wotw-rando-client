#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityAction_1_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_1_UnityEngine_Color_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x047817A8, UnityAction_1_UnityEngine_Color___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::UnityAction_1_UnityEngine_Color_ * this_ptr, app::Color arg0))
    IL2CPP_REGISTER_METHOD(0x02AC76E0, app::IAsyncResult *, BeginInvoke, (app::UnityAction_1_UnityEngine_Color_ * this_ptr, app::Color arg0, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_1_UnityEngine_Color_ * this_ptr, app::IAsyncResult * result))
}
