#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::EntityHitReaction {
    IL2CPP_REGISTER_METHOD(0x0121E390, bool, Play, (app::EntityHitReaction * this_ptr, app::EntityDamageEvent * damage_event))
    IL2CPP_REGISTER_METHOD(0x0121F770, void, CalculateMultipliers, (app::EntityHitReaction * this_ptr, app::EntityDamageEvent * damage_event, bool instant, float * kickback_multiplier, float * vertical_multiplier, bool * should_skip_kickback))
    IL2CPP_REGISTER_METHOD(0x0121FC70, bool, ShouldApplyForceAlongTheGround, (app::EntityHitReaction * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x0121FD70, bool, CanInterruptHorizontal, (app::EntityHitReaction * this_ptr, app::EntityDamageEvent * damage_event, app::Vector2 damage_direction))
    IL2CPP_REGISTER_METHOD(0x01220070, bool, CanInterruptVertical, (app::EntityHitReaction * this_ptr, app::EntityDamageEvent * damage_event, app::Vector2 damage_direction))
    IL2CPP_REGISTER_METHOD(0x01220370, void, Update, (app::EntityHitReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012203E0, void, ctor, (app::EntityHitReaction * this_ptr))
}
