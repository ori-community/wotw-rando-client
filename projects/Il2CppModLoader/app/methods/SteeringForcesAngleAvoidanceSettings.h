#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SteeringForcesAngleAvoidanceSettings {
    IL2CPP_REGISTER_METHOD(0x00650110, void, Init, (app::SteeringForcesAngleAvoidanceSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00650210, app::Vector2, GetEffectiveDirection, (app::SteeringForcesAngleAvoidanceSettings * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x00650390, void, ctor, (app::SteeringForcesAngleAvoidanceSettings * this_ptr))
} // namespace app::classes::SteeringForcesAngleAvoidanceSettings
