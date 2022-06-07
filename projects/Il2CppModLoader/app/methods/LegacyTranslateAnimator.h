#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyTranslateAnimator {
    IL2CPP_REGISTER_METHOD(0x01127E70, void, Awake, (app::LegacyTranslateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01127E90, void, CacheOriginals, (app::LegacyTranslateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01128030, void, OnPoolSpawned, (app::LegacyTranslateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011280A0, void, AnimateIt, (app::LegacyTranslateAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyTranslateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011283A0, void, ctor, (app::LegacyTranslateAnimator * this_ptr))
}
