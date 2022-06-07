#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RotatingObstacleVisuals {
    IL2CPP_REGISTER_METHOD(0x0136FAE0, void, Start, (app::RotatingObstacleVisuals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136FC00, void, FixedUpdate, (app::RotatingObstacleVisuals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01370260, void, EnableLastImpactLoopEffect, (app::RotatingObstacleVisuals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01370410, void, DispatchOfTheLastImpactLoopEffect, (app::RotatingObstacleVisuals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013706C0, void, ctor, (app::RotatingObstacleVisuals * this_ptr))
}
