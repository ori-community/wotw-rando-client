#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GasballLocomotion.h>
#include <Modloader/app/structs/Entity.h>

namespace app::classes::Moon::GasballLocomotion {
    IL2CPP_REGISTER_METHOD(0x0148AA70, void, OnEntityInitialization, (app::GasballLocomotion * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x0148AB20, void, InstantFlip, (app::GasballLocomotion * this_ptr, float direction_sign))
    IL2CPP_REGISTER_METHOD(0x004F1990, void, ctor, (app::GasballLocomotion * this_ptr))
} // namespace app::classes::Moon::GasballLocomotion
