#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion.h>
#include <Modloader/app/structs/PetrifiedOwlBossLocomotion_Stance__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PetrifiedOwlBossLocomotion {
    IL2CPP_REGISTER_METHOD(0x005B0220, app::Transform*, get_FeetTransform, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E28E0, app::Vector3, get_FeetPosition, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_HasArrivedAtTarget, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00689CC0, float, get_Gravity, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E2900, void, set_Gravity, (app::PetrifiedOwlBossLocomotion * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00974AE0, app::EntityWeightData_EntityWeight__Enum, get_Weight, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01199F10, void, set_Weight, (app::PetrifiedOwlBossLocomotion * this_ptr, app::EntityWeightData_EntityWeight__Enum value))
    IL2CPP_REGISTER_METHOD(0x01777F30, void, ConfigureStateMachine, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::EntityLocomotionTask*, get_DefaultFSMState, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::EntityLocomotionTask*, GetNextBehaviour, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00968AA0, void, Stop, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083E8C0, app::PetrifiedOwlBossLocomotion_Stance__Enum, get_CurrentStance, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075A3F0, void, set_CurrentStance, (app::PetrifiedOwlBossLocomotion * this_ptr, app::PetrifiedOwlBossLocomotion_Stance__Enum value))
    IL2CPP_REGISTER_METHOD(0x01777F80, void, OnEntityInitialization, (app::PetrifiedOwlBossLocomotion * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x01778200, void, OnDestroy, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01778230, void, OnFixedUpdate, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017782B0, void, PlayIdle, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01778320, app::Vector3, OnProcessRootMotion, (app::PetrifiedOwlBossLocomotion * this_ptr, app::Vector3 velocity))
    IL2CPP_REGISTER_METHOD(0x01778790, bool, ShouldClampPositionX, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGUI, (app::PetrifiedOwlBossLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F1990, void, ctor, (app::PetrifiedOwlBossLocomotion * this_ptr))
} // namespace app::classes::PetrifiedOwlBossLocomotion
