#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/AirLocomotion.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::AirLocomotion {
    IL2CPP_REGISTER_METHOD(0x004F15D0, app::Transform*, get_FeetTransform, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1620, app::Vector3, get_FeetPosition, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1670, bool, get_HasArrivedAtTarget, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F16C0, bool, get_IsMovingToTarget, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1710, void, ConfigureStateMachine, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1760, app::EntityLocomotionTask*, get_DefaultFSMState, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F17B0, float, get_Gravity, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1800, void, set_Gravity, (app::AirLocomotion * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x004F1850, app::EntityWeightData_EntityWeight__Enum, get_Weight, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F18A0, void, set_Weight, (app::AirLocomotion * this_ptr, app::EntityWeightData_EntityWeight__Enum value))
    IL2CPP_REGISTER_METHOD(0x004F18F0, app::EntityLocomotionTask*, GetNextBehaviour, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1940, void, Stop, (app::AirLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1990, void, ctor, (app::AirLocomotion * this_ptr))
} // namespace app::classes::AirLocomotion
