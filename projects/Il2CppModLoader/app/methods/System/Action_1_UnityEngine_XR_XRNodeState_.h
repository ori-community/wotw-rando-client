#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_UnityEngine_XR_XRNodeState_ {
    IL2CPP_REGISTER_METHOD(0x02C0D2F0, void, Invoke, (app::Action_1_UnityEngine_XR_XRNodeState_ * this_ptr, app::XRNodeState obj))
    IL2CPP_REGISTER_METHODINFO(0x0474E870, Action_1_UnityEngine_XR_XRNodeState__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_XR_XRNodeState_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C0D9D0, app::IAsyncResult *, BeginInvoke, (app::Action_1_UnityEngine_XR_XRNodeState_ * this_ptr, app::XRNodeState obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_XR_XRNodeState_ * this_ptr, app::IAsyncResult * result))
}
