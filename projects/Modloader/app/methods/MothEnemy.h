#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/MothEnemy.h>
#include <Modloader/app/structs/MothSwarm.h>
#include <Modloader/app/structs/MothSwarmer.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MothEnemy {
    IL2CPP_REGISTER_METHOD(0x00864990, app::MothSwarm*, get_Swarm, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00864A60, app::MothSwarmer*, get_Swarmer, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00755700, bool, get_ShouldFlock, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00864A70, void, set_ShouldFlock, app::MothEnemy* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00864A80, bool, get_IsLanded, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00864A90, void, set_IsLanded, app::MothEnemy* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00864AA0, app::Vector3, get_PathTarget, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00864AC0, void, set_PathTarget, app::MothEnemy* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00864AE0, float, get_ReactionTime, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00864AF0, void, set_ReactionTime, app::MothEnemy* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00864B00, void, Awake, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00864CF0, void, OnEnable, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00864E90, void, OnDisable, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00865030, void, OnDestroy, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00865070, void, Start, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00865170, void, OnFixedUpdate, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008654B0, float, get_YRotation, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008655D0, float, get_ZRotation, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00865620, void, AnimateWings, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00865980, void, CreateSwarmer, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00865AE0, void, MoveToLandPoint, app::MothEnemy* this_ptr, app::Vector2 point, app::Vector2 normal, float max_range)
    IL2CPP_REGISTER_METHOD(0x00865FB0, void, OnDeathEvent, app::MothEnemy* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x008660A0, void, OnModifyDamage, app::MothEnemy* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x008661F0, void, OnStickyMineStuck, app::MothEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00866300, void, ctor, app::MothEnemy* this_ptr)
} // namespace app::classes::MothEnemy
