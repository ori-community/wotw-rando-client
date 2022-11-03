#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ActivateDamageReceiverAnimator {
    IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (app::ActivateDamageReceiverAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87F0, void, OnStopPlay, (app::ActivateDamageReceiverAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8830, void, CacheOriginals, (app::ActivateDamageReceiverAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8860, void, SampleValue, (app::ActivateDamageReceiverAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x004C8890, void, RestoreToOriginalState, (app::ActivateDamageReceiverAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C88C0, float, get_Duration, (app::ActivateDamageReceiverAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::ActivateDamageReceiverAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C88D0, void, ctor, (app::ActivateDamageReceiverAnimator * this_ptr))
} // namespace app::classes::ActivateDamageReceiverAnimator
