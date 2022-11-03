#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SoundCompositionSoundVolumeAnimator {
    IL2CPP_REGISTER_METHOD(0x00EE78A0, void, AnimateIt, (app::SoundCompositionSoundVolumeAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00EE7990, void, RestoreToOriginalState, (app::SoundCompositionSoundVolumeAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005790B0, void, ctor, (app::SoundCompositionSoundVolumeAnimator * this_ptr))
} // namespace app::classes::SoundCompositionSoundVolumeAnimator
