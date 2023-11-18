#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription.h>
#include <Modloader/app/structs/AnimationMontage.h>
#include <Modloader/app/structs/IMontageEventProvider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::AnimationMontage_TimelineEventSubscription {
    IL2CPP_REGISTER_METHOD(0x0133C0B0, void, ctor, (app::AnimationMontage_TimelineEventSubscription * this_ptr, app::String* event_id, app::AnimationMontage* montage, app::IMontageEventProvider* provider))
    IL2CPP_REGISTER_METHOD(0x0133C0C0, void, Subscribe, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0133C520, void, Unsubscribe, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0133C980, void, OnStart, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0133C9B0, void, OnStay, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0133C9E0, void, OnEnd, (app::AnimationMontage_TimelineEventSubscription * this_ptr))
} // namespace app::classes::Moon::AnimationMontage_TimelineEventSubscription
