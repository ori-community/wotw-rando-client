#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterEnvironmentForceController.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CharacterEnvironmentForceController {
    IL2CPP_REGISTER_METHOD(0x0104E000, void, Start, app::CharacterEnvironmentForceController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104E510, void, OnEnable, app::CharacterEnvironmentForceController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104E5B0, void, OnDisable, app::CharacterEnvironmentForceController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104E650, void, OnDamageReceived, app::CharacterEnvironmentForceController* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x0104E960, void, OnDestroy, app::CharacterEnvironmentForceController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104ED30, void, OnCollisionGround, app::CharacterEnvironmentForceController* this_ptr, app::Vector3 normal, app::Collider* target)
    IL2CPP_REGISTER_METHOD(0x0104EDC0, void, OnLand, app::CharacterEnvironmentForceController* this_ptr, app::Vector3 normal, app::Collider* target)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::CharacterEnvironmentForceController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104F070, void, OnUpdate, app::CharacterEnvironmentForceController* this_ptr, float dt)
    IL2CPP_REGISTER_METHOD(0x0104F760, app::Vector3, get_Velocity, app::CharacterEnvironmentForceController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0104F850, void, AddGroundImpulse, app::CharacterEnvironmentForceController* this_ptr, float impulse)
    IL2CPP_REGISTER_METHOD(0x0104FA90, void, ctor, app::CharacterEnvironmentForceController* this_ptr)
} // namespace app::classes::CharacterEnvironmentForceController
