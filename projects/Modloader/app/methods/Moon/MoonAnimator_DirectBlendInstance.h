#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonAnimator_DirectBlendInstance.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstanceType__Enum.h>
#include <Modloader/app/structs/IAnimation.h>

namespace app::classes::Moon::MoonAnimator_DirectBlendInstance {
    IL2CPP_REGISTER_METHOD(0x02115780, bool, get_HasValidInput, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_ValidInputCount, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator_AnimationInstance__Array*, get_InputInstances, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02115790, app::Playable, get_Playable, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02115850, float, get_Speed, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021158E0, void, set_Speed, (app::MoonAnimator_DirectBlendInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02115980, float, get_Duration, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02115A10, float, get_Time, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02115AA0, void, set_Time, (app::MoonAnimator_DirectBlendInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02115BA0, float, get_NormalizedTime, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02115CB0, void, set_NormalizedTime, (app::MoonAnimator_DirectBlendInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02115D00, float, get_SingleLoopDuration, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::MoonAnimator_AnimationInstanceType__Enum, get_Type, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02115E60, void, ReturnToPool, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (app::MoonAnimator_DirectBlendInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02115F00, float, GetInputWeight, (app::MoonAnimator_DirectBlendInstance * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02115FC0, void, OnRetrievedFromPool, (app::MoonAnimator_DirectBlendInstance * this_ptr, app::IAnimation* animation))
    IL2CPP_REGISTER_METHOD(0x021164D0, void, OnReset, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021165D0, void, OnRetunedToPool, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02116890, void, OnPrepare, (app::MoonAnimator_DirectBlendInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02116920, void, OnPostPrepare, (app::MoonAnimator_DirectBlendInstance * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x02116A70, void, OnProcessEvents, (app::MoonAnimator_DirectBlendInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02116B00, void, Update, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02116C90, void, UpdateWeights, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02116EB0, void, UpdateDuration, (app::MoonAnimator_DirectBlendInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonAnimator_DirectBlendInstance * this_ptr))
} // namespace app::classes::Moon::MoonAnimator_DirectBlendInstance
