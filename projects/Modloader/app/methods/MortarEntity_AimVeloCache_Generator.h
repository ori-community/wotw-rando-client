#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Generator.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MortarEntity_AimVeloCache_Generator {
    IL2CPP_REGISTER_METHOD(0x0147A540, void, EnumerateVelocitiesForTarget, (app::MortarEntity_AimVeloCache_Generator * this_ptr, app::Vector3 target_pos_world))
    IL2CPP_REGISTER_METHOD(0x0147AF10, void, EnumerateVelocities, (app::MortarEntity_AimVeloCache_Generator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147B130, void, CastVelocityArcs, (app::MortarEntity_AimVeloCache_Generator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0147B4A0, void, Execute, (app::MortarEntity_AimVeloCache_Generator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MortarEntity_AimVeloCache_Generator * this_ptr))
} // namespace app::classes::MortarEntity_AimVeloCache_Generator
