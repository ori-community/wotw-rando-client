#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClusterModifierBone2.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ClusterModifierBone2 {
    IL2CPP_REGISTER_METHOD(0x012C7140, app::String*, get_BoneName, app::ClusterModifierBone2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C70B0, void, ctor, app::ClusterModifierBone2* this_ptr)
} // namespace app::classes::ClusterModifierBone2
