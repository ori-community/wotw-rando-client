#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::EntityHitReaction_KickbackRuleOverrideForBehaviour {
    IL2CPP_REGISTER_METHOD(0x01220810, bool, CanBeApplied, (app::EntityHitReaction_KickbackRuleOverrideForBehaviour * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x01220920, void, ctor, (app::EntityHitReaction_KickbackRuleOverrideForBehaviour * this_ptr))
}
