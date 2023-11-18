#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BombSlugEntity.h>
#include <Modloader/app/structs/BombSlugEntity_BombSlugState__Enum.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::BombSlugEntity {
    IL2CPP_REGISTER_METHOD(0x00D36680, bool, get_IsGoingToExplode, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D36690, void, OnFixedUpdate, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D36740, void, ResolveDamage, (app::BombSlugEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x00D36810, void, ResetEntity, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D36870, void, OnMinerPullOut, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D369C0, void, OnMinerThrow, (app::BombSlugEntity * this_ptr, app::Vector2 force, app::EnemyEntity* miner))
    IL2CPP_REGISTER_METHOD(0x00D36A00, void, OnDied, (app::BombSlugEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x00D36A70, bool, OnContactDamage, (app::BombSlugEntity * this_ptr, app::GameObject* contact_damage_receiver))
    IL2CPP_REGISTER_METHOD(0x00D36C30, void, SetState, (app::BombSlugEntity * this_ptr, app::BombSlugEntity_BombSlugState__Enum state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitNormalState, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D36D80, void, ExitExplosionCountdownState, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitExplodedState, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D37120, void, EnterNormalState, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D37310, void, EnterExplosionCountdownState, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D373E0, void, EnterExplodedState, (app::BombSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D37610, void, ctor, (app::BombSlugEntity * this_ptr))
} // namespace app::classes::BombSlugEntity
