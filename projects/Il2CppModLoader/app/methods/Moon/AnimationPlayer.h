#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::AnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x01BA4D70, app::GameObject*, get_ExternalTarget, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA4E20, app::MoonAnimation*, get_EffectiveAnimation, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA4F30, app::ActiveAnimationHandle*, get_ActiveAnimation, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA4F40, bool, get_IsAnimatorActive, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA5030, float, get_ResolvedAdditiveWeight, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_ApplyRootMotionForPreview, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009CA210, void, set_ApplyRootMotionForPreview, (app::AnimationPlayer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01BA5090, void, OnDestroy, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA50B0, void, Finalize, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA5150, void, MoonCleanup, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA5350, void, OnStartPlayback, (app::AnimationPlayer * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01BA57E0, void, OnUpdateEntity, (app::AnimationPlayer * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01BA5800, void, OnStopPlayback, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA5850, void, SetTimeScale, (app::AnimationPlayer * this_ptr, float timescale))
    IL2CPP_REGISTER_METHOD(0x01BA5880, void, Play, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA5B20, void, OnActiveAnimationStopEvent, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA5CE0, void, SubscribeToMoonAnimatorEnableCallback, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA5F40, void, UnsubscribeToMoonAnimatorEnableCallback, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA61A0, void, LateAnimationStart, (app::AnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722CE8, AnimationPlayer_LateAnimationStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BA61F0, void, ctor, (app::AnimationPlayer * this_ptr))
} // namespace app::classes::Moon::AnimationPlayer
