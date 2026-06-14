#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationMontage_Entry.h>
#include <Modloader/app/structs/BaseAnimator.h>

namespace app::classes::Moon::AnimationMontage_Entry {
    IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_StartTime, app::AnimationMontage_Entry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B83F40, void, set_StartTime, app::AnimationMontage_Entry* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0133BEF0, float, get_EndTime, app::AnimationMontage_Entry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_Speed, app::AnimationMontage_Entry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Speed, app::AnimationMontage_Entry* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0133BFD0, float, get_Duration, app::AnimationMontage_Entry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::BaseAnimator*, get_Animator, app::AnimationMontage_Entry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Animator, app::AnimationMontage_Entry* this_ptr, app::BaseAnimator* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AnimationMontage_Entry* this_ptr)
} // namespace app::classes::Moon::AnimationMontage_Entry
