#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::PlayableCharacterAnimator {
    IL2CPP_REGISTER_METHOD(0x00779600, bool, get_CharacterInstantiatedOnPlay, (app::PlayableCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007796A0, void, OnStartPlayback, (app::PlayableCharacterAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00779CD0, void, OnStopPlayback, (app::PlayableCharacterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00779E60, void, ctor, (app::PlayableCharacterAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::PlayableCharacterAnimator
