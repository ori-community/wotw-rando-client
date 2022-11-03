#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KwolokBossTendrilStrikeBehaviour {
    IL2CPP_REGISTER_METHOD(0x012EE6D0, int32_t, get_GroundMask, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EE6E0, void, ModifyPostAttackCooldown, (app::KwolokBossTendrilStrikeBehaviour * this_ptr, bool* cooldown))
    IL2CPP_REGISTER_METHOD(0x012EE6F0, void, OnEntityInitialized, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EEBE0, void, OnEnter, (app::KwolokBossTendrilStrikeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012EF250, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossTendrilStrikeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012EF350, void, OnExit, (app::KwolokBossTendrilStrikeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x012EF710, float, ComputeUtility, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EF950, void, InitializeHitReactionController, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EFA30, bool, ShouldCancel, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EFA60, bool, HasRemainingStrikes, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EFA80, void, OnDamageReceived, (app::KwolokBossTendrilStrikeBehaviour * this_ptr, app::DamageResult damage))
    IL2CPP_REGISTER_METHODINFO(0x04705E50, KwolokBossTendrilStrikeBehaviour_OnDamageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012EFB60, void, OnAttackTrigger, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476DBE8, KwolokBossTendrilStrikeBehaviour_OnAttackTrigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012F0110, app::Vector2, GetClosestPointInPath, (app::KwolokBossTendrilStrikeBehaviour * this_ptr, app::Vector3 pos))
    IL2CPP_REGISTER_METHOD(0x012F0340, void, ctor, (app::KwolokBossTendrilStrikeBehaviour * this_ptr))
} // namespace app::classes::KwolokBossTendrilStrikeBehaviour
