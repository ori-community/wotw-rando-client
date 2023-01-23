#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/UberSwarmPOI.h>
#include <Modloader/app/structs/ISwarmer.h>

namespace app::classes::UberSwarmPOI {
    IL2CPP_REGISTER_METHOD(0x0128C2C0, app::Vector2, get_Position, (app::UberSwarmPOI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128C420, float, get_Radius, (app::UberSwarmPOI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128C540, float, get_HalfWidth, (app::UberSwarmPOI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128C660, float, get_HalfHeight, (app::UberSwarmPOI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128C780, void, OnValidate, (app::UberSwarmPOI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128C810, void, Awake, (app::UberSwarmPOI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128C970, void, OnDestroy, (app::UberSwarmPOI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128CAC0, app::Vector2, CalculateVelocity, (app::UberSwarmPOI * this_ptr, app::ISwarmer* swarmer))
    IL2CPP_REGISTER_METHOD(0x0128CBA0, app::Vector2, CalculateVelocityCircle, (app::UberSwarmPOI * this_ptr, app::ISwarmer* swarmer))
    IL2CPP_REGISTER_METHOD(0x0128CE80, app::Vector2, CalculateVelocityRectangle, (app::UberSwarmPOI * this_ptr, app::ISwarmer* swarmer))
    IL2CPP_REGISTER_METHOD(0x0128D500, void, ctor, (app::UberSwarmPOI * this_ptr))
} // namespace app::classes::UberSwarmPOI
