#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationEndedCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>

namespace app::classes::fsm::AnimationEndedCondition {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AnimationEndedCondition * this_ptr, app::SpriteAnimatorWithTransitions* sprite_animator))
    IL2CPP_REGISTER_METHOD(0x00F6C9E0, bool, Validate, (app::AnimationEndedCondition * this_ptr, app::IContext* context))
} // namespace app::classes::fsm::AnimationEndedCondition
