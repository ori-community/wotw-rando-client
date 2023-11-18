#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FBBIKArmBending.h>

namespace app::classes::RootMotion::FinalIK::FBBIKArmBending {
    IL2CPP_REGISTER_METHOD(0x02054C60, void, LateUpdate, (app::FBBIKArmBending * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02055890, void, OnPostFBBIK, (app::FBBIKArmBending * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02055D40, void, OnDestroy, (app::FBBIKArmBending * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FBBIKArmBending * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::FBBIKArmBending
