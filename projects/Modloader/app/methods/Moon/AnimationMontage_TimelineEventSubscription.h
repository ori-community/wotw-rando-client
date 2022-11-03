#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::AnimationMontage_TimelineEventSubscription {
    IL2CPP_REGISTER_METHOD(0x0133C0B0, void, ctor, (app::AnimationMontage_TimelineEventSubscription * this_ptr, app::String* event_id, app::AnimationMontage* montage, app::IMontageEventProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0133C0C0, void, Subscribe, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0133C520, void, Unsubscribe, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0133C980, void, OnStart, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712C50, AnimationMontage_TimelineEventSubscription_OnStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0133C9B0, void, OnStay, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047936D8, AnimationMontage_TimelineEventSubscription_OnStay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0133C9E0, void, OnEnd, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E6D8, AnimationMontage_TimelineEventSubscription_OnEnd__MethodInfo)
} // namespace app::classes::Moon::AnimationMontage_TimelineEventSubscription
