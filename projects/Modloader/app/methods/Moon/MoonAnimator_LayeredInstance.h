#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonAnimator_LayeredInstance.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#include <Modloader/app/structs/Playable.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstanceType__Enum.h>
#include <Modloader/app/structs/IAnimation.h>

namespace app::classes::Moon::MoonAnimator_LayeredInstance {
    IL2CPP_REGISTER_METHOD(0x02119350, bool, get_HasValidInput, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02119370, int32_t, get_ValidInputCount, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator_AnimationInstance__Array*, get_InputInstances, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02119390, app::Playable, get_Playable, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02119450, float, get_Speed, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021194E0, void, set_Speed, (app::MoonAnimator_LayeredInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02119580, float, get_Duration, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02119610, float, get_Time, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021196A0, void, set_Time, (app::MoonAnimator_LayeredInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02111090, float, get_NormalizedTime, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021110E0, void, set_NormalizedTime, (app::MoonAnimator_LayeredInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x021197F0, float, get_SingleLoopDuration, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D89A0, app::MoonAnimator_AnimationInstanceType__Enum, get_Type, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02119930, void, ReturnToPool, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (app::MoonAnimator_LayeredInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x021199D0, float, GetInputWeight, (app::MoonAnimator_LayeredInstance * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02119A90, void, OnRetrievedFromPool, (app::MoonAnimator_LayeredInstance * this_ptr, app::IAnimation* animation))
    IL2CPP_REGISTER_METHOD(0x02119F70, void, OnReset, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211A090, void, OnRetunedToPool, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211A370, void, OnPrepare, (app::MoonAnimator_LayeredInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0211A410, void, OnPostPrepare, (app::MoonAnimator_LayeredInstance * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x0211A590, void, OnProcessEvents, (app::MoonAnimator_LayeredInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0211A640, void, Update, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211A7E0, void, UpdateDuration, (app::MoonAnimator_LayeredInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonAnimator_LayeredInstance * this_ptr))
} // namespace app::classes::Moon::MoonAnimator_LayeredInstance
