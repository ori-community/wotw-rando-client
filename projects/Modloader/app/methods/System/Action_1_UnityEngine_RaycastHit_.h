#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(0x02C0BD90, void, Invoke, (app::Action_1_UnityEngine_RaycastHit_ * this_ptr, app::RaycastHit obj))
    IL2CPP_REGISTER_METHODINFO(0x0473B958, Action_1_UnityEngine_RaycastHit__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_RaycastHit_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0471CD88, Action_1_UnityEngine_RaycastHit___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C0C350, app::IAsyncResult*, BeginInvoke, (app::Action_1_UnityEngine_RaycastHit_ * this_ptr, app::RaycastHit obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_RaycastHit_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_UnityEngine_RaycastHit_
