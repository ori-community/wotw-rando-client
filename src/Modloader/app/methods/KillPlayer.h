#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KillPlayer.h>

namespace app::classes::KillPlayer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::KillPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E743F0, void, OnTriggerEnter, app::KillPlayer* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00E74480, void, OnCollisionEnter, app::KillPlayer* this_ptr, app::Collision* other)
    IL2CPP_REGISTER_METHOD(0x00E744C0, void, DealDamage, app::KillPlayer* this_ptr, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::KillPlayer* this_ptr)
} // namespace app::classes::KillPlayer
