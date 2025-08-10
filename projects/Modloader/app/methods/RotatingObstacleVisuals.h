#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RotatingObstacleVisuals.h>

namespace app::classes::RotatingObstacleVisuals {
    IL2CPP_REGISTER_METHOD(0x0136FAE0, void, Start, app::RotatingObstacleVisuals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136FC00, void, FixedUpdate, app::RotatingObstacleVisuals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01370260, void, EnableLastImpactLoopEffect, app::RotatingObstacleVisuals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01370410, void, DispatchOfTheLastImpactLoopEffect, app::RotatingObstacleVisuals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013706C0, void, ctor, app::RotatingObstacleVisuals* this_ptr)
} // namespace app::classes::RotatingObstacleVisuals
