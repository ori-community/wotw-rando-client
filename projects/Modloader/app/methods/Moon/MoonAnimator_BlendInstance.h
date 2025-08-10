#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstanceType__Enum.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#include <Modloader/app/structs/MoonAnimator_BlendInstance.h>
#include <Modloader/app/structs/Playable.h>

namespace app::classes::Moon::MoonAnimator_BlendInstance {
    IL2CPP_REGISTER_METHOD(0x02112700, bool, get_HasValidInput, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013AF3B0, int32_t, get_ValidInputCount, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator_AnimationInstance__Array*, get_InputInstances, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02112720, app::Playable, get_Playable, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021127E0, float, get_Speed, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02112870, void, set_Speed, app::MoonAnimator_BlendInstance* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02112910, float, get_Duration, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021129A0, float, get_Time, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02112A30, void, set_Time, app::MoonAnimator_BlendInstance* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02111090, float, get_NormalizedTime, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021110E0, void, set_NormalizedTime, app::MoonAnimator_BlendInstance* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02112B80, float, get_SingleLoopDuration, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::MoonAnimator_AnimationInstanceType__Enum, get_Type, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02112D80, void, ReturnToPool, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, app::MoonAnimator_BlendInstance* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x02112E20, float, GetInputWeight, app::MoonAnimator_BlendInstance* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02112EE0, void, OnRetrievedFromPool, app::MoonAnimator_BlendInstance* this_ptr, app::IAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x021132F0, void, OnReset, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02113410, void, OnRetunedToPool, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021136F0, void, OnPrepare, app::MoonAnimator_BlendInstance* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x02113790, void, OnPostPrepare, app::MoonAnimator_BlendInstance* this_ptr, float weight)
    IL2CPP_REGISTER_METHOD(0x02113910, void, OnProcessEvents, app::MoonAnimator_BlendInstance* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x02113AB0, void, Update, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02113C00, void, UpdateBlendingInfo, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02113D00, void, UpdateDuration, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02113F90, void, UpdateInputSpeeds, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02114100, void, UpdateInputWeights, app::MoonAnimator_BlendInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonAnimator_BlendInstance* this_ptr)
} // namespace app::classes::Moon::MoonAnimator_BlendInstance
