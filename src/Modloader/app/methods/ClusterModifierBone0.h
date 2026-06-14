#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClusterModifierBone0.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ClusterModifierBone0 {
    IL2CPP_REGISTER_METHOD(0x012C7030, app::String*, get_BoneName, app::ClusterModifierBone0* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ControlMask, app::ClusterModifierBone0* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C70B0, void, ctor, app::ClusterModifierBone0* this_ptr)
} // namespace app::classes::ClusterModifierBone0
