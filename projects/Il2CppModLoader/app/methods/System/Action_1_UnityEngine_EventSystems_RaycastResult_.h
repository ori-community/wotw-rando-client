#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C09300, void, Invoke, (app::Action_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult obj))
    IL2CPP_REGISTER_METHOD(0x02C09990, app::IAsyncResult *, BeginInvoke, (app::Action_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::IAsyncResult * result))
}
