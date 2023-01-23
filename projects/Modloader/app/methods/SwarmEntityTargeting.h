#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SwarmEntityTargeting.h>

namespace app::classes::SwarmEntityTargeting {
    IL2CPP_REGISTER_METHOD(0x01820A10, bool, ISwarmAttackable_ShouldSpawnEffect, (app::SwarmEntityTargeting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01820E60, void, Update, (app::SwarmEntityTargeting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01820F00, void, ctor, (app::SwarmEntityTargeting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01820F10, void, cctor, ())
} // namespace app::classes::SwarmEntityTargeting
