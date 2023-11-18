#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrabEntity.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::CrabEntity {
    IL2CPP_REGISTER_METHOD(0x00DB3EC0, void, set_ShouldReflectArrows, (app::CrabEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00DB3EF0, bool, get_ShouldReflectArrows, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB3F20, bool, get_MeetsRetaliationConditions, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB3F40, void, set_MeetsRetaliationConditions, (app::CrabEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00DB3F50, bool, get_ShouldGiveUpOnChasing, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB3FB0, float, get_GroupBehaviourExtraDelay, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB4090, float, get_AttackInterval, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB4190, float, get_SmallGroupBehaviourExtraDelay, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB4280, void, ResolveDamage, (app::CrabEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x00DB4410, void, WwiseOnClawAttackInterrupted, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB4500, void, OnFixedUpdate, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB4520, void, UpdateRetaliationLogic, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB4820, void, ctor, (app::CrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB49A0, void, cctor, ())
} // namespace app::classes::CrabEntity
