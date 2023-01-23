#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FeedingGroundsDangerEffect.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/UberPostProcessAnimator.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsDangerEffect {
    IL2CPP_REGISTER_METHOD(0x017852B0, void, FadeIn, (app::FeedingGroundsDangerEffect * this_ptr, float timescale))
    IL2CPP_REGISTER_METHOD(0x01785540, void, FadeOut, (app::FeedingGroundsDangerEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01785750, void, FadeInMaxLoop, (app::FeedingGroundsDangerEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765938, FeedingGroundsDangerEffect_FadeInMaxLoop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01785780, void, PlayTimeline, (app::FeedingGroundsDangerEffect * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x017858A0, void, SetPostProcessStartingValue, (app::FeedingGroundsDangerEffect * this_ptr, app::UberPostProcessAnimator* animator, float value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FeedingGroundsDangerEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017859B0, void, _FadeOut_b__10_0, (app::FeedingGroundsDangerEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798F58, FeedingGroundsDangerEffect__FadeOut_b__10_0__MethodInfo)
} // namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsDangerEffect
