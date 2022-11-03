#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyColorFlashAnimator {
    IL2CPP_REGISTER_METHOD(0x00A16740, void, Awake, (app::LegacyColorFlashAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A167D0, void, OnEnable, (app::LegacyColorFlashAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A16870, void, Start, (app::LegacyColorFlashAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A169E0, void, OnMaterialChanged, (app::LegacyColorFlashAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A169F0, void, CacheShaderInformation, (app::LegacyColorFlashAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A16DC0, void, AnimateIt, (app::LegacyColorFlashAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyColorFlashAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A16FB0, void, ctor, (app::LegacyColorFlashAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A16FE0, void, cctor, ())
} // namespace app::classes::LegacyColorFlashAnimator
