#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SoundCompositionTransitionHandler {
    IL2CPP_REGISTER_METHOD(0x00EE7F60, void, FixedUpdate, (app::SoundCompositionTransitionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyFadeOut, (app::SoundCompositionTransitionHandler * this_ptr, app::SoundPlayer* sound_player, app::AudioClip* sound))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyFadeIn, (app::SoundCompositionTransitionHandler * this_ptr, app::SoundPlayer* sound_player, app::AudioClip* sound))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SoundCompositionTransitionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C944C0, void, _FixedUpdate_b__7_0, (app::SoundCompositionTransitionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047463E8, SoundCompositionTransitionHandler__FixedUpdate_b__7_0__MethodInfo)
} // namespace app::classes::SoundCompositionTransitionHandler
