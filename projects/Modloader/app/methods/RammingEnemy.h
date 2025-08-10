#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/RammingEnemy.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::RammingEnemy {
    IL2CPP_REGISTER_METHOD(0x00728C30, bool, CanBeOptimized, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00728C70, bool, ZoneRectanglesContain, app::RammingEnemy* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x00728F40, void, OnDash, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00728F70, bool, IsOnGround, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00728FA0, void, Awake, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00729290, void, OnDamageDealt, app::RammingEnemy* this_ptr, app::DamageDealer* dealer, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x007293C0, void, OnDestroy, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00729580, void, OnModifyDamage, app::RammingEnemy* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanBeFrozen, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007296A0, float, get_CurrentStateTime, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007296C0, void, Start, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072B9F0, bool, HasHitWall, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072BB20, bool, IsCornered, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00728F70, bool, HasLanded, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072BE50, void, FixedUpdate, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C0E0, bool, get_EnemyInsideZone, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C1B0, bool, CanSeePlayer, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C320, bool, PlayerInsideZone, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C400, bool, CantSeePlayer, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C520, void, UpdateRotation, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C700, bool, CantSeePlayerAndTooClose, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C780, bool, ShouldStopRetreating, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C7F0, void, ctor, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C940, bool, _Start_b__20_0, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C9A0, bool, _Start_b__20_1, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072C9E0, bool, _Start_b__20_2, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CAA0, bool, _Start_b__20_3, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CBD0, bool, _Start_b__20_4, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CD50, bool, _Start_b__20_5, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CDC0, bool, _Start_b__20_6, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CE10, bool, _Start_b__20_7, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CE80, bool, _Start_b__20_8, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CED0, bool, _Start_b__20_9, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CF20, bool, _Start_b__20_10, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CF60, bool, _Start_b__20_11, app::RammingEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072CFD0, bool, _Start_b__20_12, app::RammingEnemy* this_ptr)
} // namespace app::classes::RammingEnemy
