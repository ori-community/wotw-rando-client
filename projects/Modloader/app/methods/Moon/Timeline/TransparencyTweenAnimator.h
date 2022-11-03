#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::TransparencyTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::TransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D10DB0, app::GameObject*, get_ExternalTarget, (app::TransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D10E40, void, OnStartPlayback, (app::TransparencyTweenAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D11170, void, SetupInitialValues, (app::TransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753D20, TransparencyTweenAnimator_SetupInitialValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::TransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::TransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D11440, void, OnUpdateEntity, (app::TransparencyTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D11820, bool, get_ShouldUpdateWhileDisabled, (app::TransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, HasFinished, (app::TransparencyTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::MoonReference_1_UnityEngine_GameObject_*, GetGameObjectTarget, (app::TransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D11930, float, GetTweenNormalizedValue, (app::TransparencyTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C548, TransparencyTweenAnimator_GetTweenNormalizedValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D11980, void, SynchronizeData, (app::TransparencyTweenAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00D11C00, void, SynchronizePad, (app::TransparencyTweenAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record, app::TimelineEntity* entity, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x00D11D80, bool, ApproximateEvent, (app::TransparencyTweenAnimator * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x00D11FB0, void, ctor, (app::TransparencyTweenAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::TransparencyTweenAnimator
