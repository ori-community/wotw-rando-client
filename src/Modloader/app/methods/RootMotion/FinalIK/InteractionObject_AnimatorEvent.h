#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Animation.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/InteractionObject_AnimatorEvent.h>

namespace app::classes::RootMotion::FinalIK::InteractionObject_AnimatorEvent {
    IL2CPP_REGISTER_METHOD(0x02A0D6B0, void, Activate_1, app::InteractionObject_AnimatorEvent* this_ptr, bool pick_up)
    IL2CPP_REGISTER_METHOD(0x02A0D910, void, Activate_2, app::InteractionObject_AnimatorEvent* this_ptr, app::Animator* animator)
    IL2CPP_REGISTER_METHOD(0x02A0DA30, void, Activate_3, app::InteractionObject_AnimatorEvent* this_ptr, app::Animation* animation)
    IL2CPP_REGISTER_METHOD(0x02A0DC10, void, ctor, app::InteractionObject_AnimatorEvent* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::InteractionObject_AnimatorEvent
