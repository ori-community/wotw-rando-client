#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimator_Blend2DInstance.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstanceType__Enum.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#include <Modloader/app/structs/Playable.h>

namespace app::classes::Moon::MoonAnimator_Blend2DInstance {
    IL2CPP_REGISTER_METHOD(0x02110BF0, bool, get_HasValidInput, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110C10, int32_t, get_ValidInputCount, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator_AnimationInstance__Array*, get_InputInstances, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110C30, app::Playable, get_Playable, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110CF0, float, get_Speed, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110D80, void, set_Speed, (app::MoonAnimator_Blend2DInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02110E20, float, get_Duration, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110EB0, float, get_Time, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110F40, void, set_Time, (app::MoonAnimator_Blend2DInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02111090, float, get_NormalizedTime, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021110E0, void, set_NormalizedTime, (app::MoonAnimator_Blend2DInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02111130, float, get_SingleLoopDuration, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (app::MoonAnimator_Blend2DInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00420230, app::MoonAnimator_AnimationInstanceType__Enum, get_Type, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021112C0, void, ReturnToPool, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02111360, float, GetInputWeight, (app::MoonAnimator_Blend2DInstance * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02111420, void, OnRetrievedFromPool, (app::MoonAnimator_Blend2DInstance * this_ptr, app::IAnimation* animation))
    IL2CPP_REGISTER_METHOD(0x02111830, void, OnReset, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02111950, void, OnRetunedToPool, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02111C30, void, OnPrepare, (app::MoonAnimator_Blend2DInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02111CD0, void, OnPostPrepare, (app::MoonAnimator_Blend2DInstance * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x02111E50, void, OnProcessEvents, (app::MoonAnimator_Blend2DInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02111F00, void, Update, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02112040, void, UpdateBlendingInfo, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02112200, void, UpdateDuration, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021123C0, void, UpdateInputSpeeds, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021124C0, void, UpdateInputWeights, (app::MoonAnimator_Blend2DInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02112660, void, ctor, (app::MoonAnimator_Blend2DInstance * this_ptr))
} // namespace app::classes::Moon::MoonAnimator_Blend2DInstance
