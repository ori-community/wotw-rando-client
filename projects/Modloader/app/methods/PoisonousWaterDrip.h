#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PoisonousWaterDrip.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DamageOwner.h>

namespace app::classes::PoisonousWaterDrip {
    IL2CPP_REGISTER_METHOD(0x01431F70, void, Launch, (app::PoisonousWaterDrip * this_ptr, float speed, app::Vector3 direction, float gravity, app::GameObject* owner, app::DamageOwner* damage_owner))
    IL2CPP_REGISTER_METHOD(0x01431FD0, void, OnBeforeExplodeOnWater, (app::PoisonousWaterDrip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01431FE0, void, FixedUpdate, (app::PoisonousWaterDrip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01432190, void, AddPoisonWaterBlob, (app::PoisonousWaterDrip * this_ptr, bool forced))
    IL2CPP_REGISTER_METHOD(0x014324B0, void, ctor, (app::PoisonousWaterDrip * this_ptr))
} // namespace app::classes::PoisonousWaterDrip
