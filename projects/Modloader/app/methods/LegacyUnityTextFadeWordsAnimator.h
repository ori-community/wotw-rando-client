#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyUnityTextFadeWordsAnimator {
    IL2CPP_REGISTER_METHOD(0x01130B00, app::String*, ColorToHex, (app::LegacyUnityTextFadeWordsAnimator * this_ptr, app::Color32 color))
    IL2CPP_REGISTER_METHOD(0x01130C50, void, Start, (app::LegacyUnityTextFadeWordsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01130FA0, void, AnimateIt, (app::LegacyUnityTextFadeWordsAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011313D0, void, RestoreToOriginalState, (app::LegacyUnityTextFadeWordsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011315A0, void, ctor, (app::LegacyUnityTextFadeWordsAnimator * this_ptr))
} // namespace app::classes::LegacyUnityTextFadeWordsAnimator
