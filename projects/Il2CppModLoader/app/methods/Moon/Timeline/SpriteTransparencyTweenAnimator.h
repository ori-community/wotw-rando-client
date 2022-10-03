#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::SpriteTransparencyTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x00D07AA0, app::GameObject*, get_ExternalTarget, (app::SpriteTransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::SpriteTransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::SpriteRenderer*, get_SpriteRenderer, (app::SpriteTransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D07B30, void, OnStartPlayback, (app::SpriteTransparencyTweenAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D07DB0, void, SetupInitialValues, (app::SpriteTransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B608, SpriteTransparencyTweenAnimator_SetupInitialValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D07F20, void, OnUpdateEntity, (app::SpriteTransparencyTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D08300, void, UpdateTransparency, (app::SpriteTransparencyTweenAnimator * this_ptr, float alpha))
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, HasFinished, (app::SpriteTransparencyTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00D08420, void, SynchronizeData, (app::SpriteTransparencyTweenAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00D086B0, bool, ApproximateEvent, (app::SpriteTransparencyTweenAnimator * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x00D088B0, void, ctor, (app::SpriteTransparencyTweenAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::SpriteTransparencyTweenAnimator
