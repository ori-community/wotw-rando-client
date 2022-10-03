#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::Demos::FBIKHandsOnProp {
    IL2CPP_REGISTER_METHOD(0x0221A1C0, void, Awake, (app::FBIKHandsOnProp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0221A380, void, OnPreRead, (app::FBIKHandsOnProp * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707848, FBIKHandsOnProp_OnPreRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0221A500, void, HandsOnProp, (app::FBIKHandsOnProp * this_ptr, app::IKEffector* main_hand, app::IKEffector* other_hand))
    IL2CPP_REGISTER_METHOD(0x0221B1C0, void, OnDestroy, (app::FBIKHandsOnProp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FBIKHandsOnProp * this_ptr))
} // namespace app::classes::RootMotion::Demos::FBIKHandsOnProp
