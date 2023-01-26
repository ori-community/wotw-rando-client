#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SkeetoAirEntityMovementProcessor {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawGizmos, ())
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_ApplyNoise, (app::SkeetoAirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_ApplyNoise, (app::SkeetoAirEntityMovementProcessor * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0074B530, float, get_AccelerationMultiplier, (app::SkeetoAirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B540, void, set_AccelerationMultiplier, (app::SkeetoAirEntityMovementProcessor * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0074B550, float, get_DecelerationMultiplier, (app::SkeetoAirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B560, void, set_DecelerationMultiplier, (app::SkeetoAirEntityMovementProcessor * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003FFA40, float, get_CurrentObstacleAvoidanceStrength, (app::SkeetoAirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B570, float, get_Acceleration, (app::SkeetoAirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B590, float, get_Deceleration, (app::SkeetoAirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B5B0, void, Init, (app::SkeetoAirEntityMovementProcessor * this_ptr, app::EntityWeightData_EntityWeight__Enum weight, app::CharacterPlatformMovement* platform_movement, app::ILocomotionTurningHandler* turning_handler))
    IL2CPP_REGISTER_METHOD(0x0074B720, void, OnFixedUpdate, (app::SkeetoAirEntityMovementProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074BC30, bool, ApplyCollisionAvoidance, (app::SkeetoAirEntityMovementProcessor * this_ptr, app::Vector2* velocity))
    IL2CPP_REGISTER_METHOD(0x0074C1D0, void, DebugDrawLolipop, (app::SkeetoAirEntityMovementProcessor * this_ptr, app::Vector3 from, app::Vector3 to, float radius, app::Color color))
    IL2CPP_REGISTER_METHOD(0x0074C370, void, ctor, (app::SkeetoAirEntityMovementProcessor * this_ptr))
} // namespace app::classes::SkeetoAirEntityMovementProcessor
