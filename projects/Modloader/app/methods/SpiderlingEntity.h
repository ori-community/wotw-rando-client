#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderlingEntity {
    IL2CPP_REGISTER_METHOD(0x011C1220, app::GroundPatrolDirectionMode__Enum, get_MovementPattern, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C1230, void, set_MovementPattern, (app::SpiderlingEntity * this_ptr, app::GroundPatrolDirectionMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x011C1240, bool, get_ShouldToogleMoveDirection, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C1250, bool, get_ShouldFollowOri, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C12F0, bool, get_IsInAttackRange, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C1560, bool, get_ShouldIdleDuringPatrol, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C1570, void, set_ShouldIdleDuringPatrol, (app::SpiderlingEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, get_OwnerID, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C1580, void, OnAwake, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C1620, void, ResolveDamage, (app::SpiderlingEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x011C1630, bool, get_ShouldPlayFootsteps, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C17B0, void, OnUpdate, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C1900, void, ForceSpawningState, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB7040, void, OnDied, (app::SpiderlingEntity * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x011C1910, void, OnDrawGizmosSelected, (app::SpiderlingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C1E40, void, ctor, (app::SpiderlingEntity * this_ptr))
} // namespace app::classes::SpiderlingEntity
