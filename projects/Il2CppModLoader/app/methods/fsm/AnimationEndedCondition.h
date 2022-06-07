#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::fsm::AnimationEndedCondition {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AnimationEndedCondition * this_ptr, app::SpriteAnimatorWithTransitions * sprite_animator))
    IL2CPP_REGISTER_METHOD(0x00F6C9E0, bool, Validate, (app::AnimationEndedCondition * this_ptr, app::IContext * context))
}
