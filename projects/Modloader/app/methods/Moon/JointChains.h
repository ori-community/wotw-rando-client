#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/JointChains.h>

namespace app::classes::Moon::JointChains {
    IL2CPP_REGISTER_METHOD(0x01B16260, bool, IsValidChain, (app::Transform__Array * chain))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::JointChains * this_ptr))
} // namespace app::classes::Moon::JointChains
