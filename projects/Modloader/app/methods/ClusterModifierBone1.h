#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClusterModifierBone1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ClusterModifierBone1 {
    IL2CPP_REGISTER_METHOD(0x012C70C0, app::String*, get_BoneName, app::ClusterModifierBone1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C70B0, void, ctor, app::ClusterModifierBone1* this_ptr)
} // namespace app::classes::ClusterModifierBone1
