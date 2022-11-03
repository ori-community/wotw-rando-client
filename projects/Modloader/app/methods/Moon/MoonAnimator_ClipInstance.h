#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonAnimator_ClipInstance {
    IL2CPP_REGISTER_METHOD(0x021142B0, app::Playable, get_Playable, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021142C0, float, get_Speed, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02114380, void, set_Speed, (app::MoonAnimator_ClipInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02114440, float, get_Duration, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02114500, float, get_Time, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021145C0, void, set_Time, (app::MoonAnimator_ClipInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02114680, float, get_NormalizedTime, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021110E0, void, set_NormalizedTime, (app::MoonAnimator_ClipInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02114790, float, get_SingleLoopDuration, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021147D0, app::AnimationClip*, get_Clip, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MoonAnimator_AnimationInstanceType__Enum, get_Type, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004994E0, float, get_ClipLength, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021147F0, void, ReturnToPool, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02111250, void, ShiftTime, (app::MoonAnimator_ClipInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02110620, void, OnPostPrepare, (app::MoonAnimator_ClipInstance * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x02114890, void, OnRetrievedFromPool, (app::MoonAnimator_ClipInstance * this_ptr, app::IAnimation* animation))
    IL2CPP_REGISTER_METHOD(0x02114D40, void, OnReset, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02114DF0, void, OnRetunedToPool, (app::MoonAnimator_ClipInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02114F10, void, OnProcessEvents, (app::MoonAnimator_ClipInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonAnimator_ClipInstance * this_ptr))
} // namespace app::classes::Moon::MoonAnimator_ClipInstance
