#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LegacyTransparancyAnimator {
    IL2CPP_REGISTER_METHOD(0x011283E0, void, LinearFadeOut, (app::LegacyTransparancyAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x01128500, void, Awake, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011285A0, void, OnEnable, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01128640, void, Start, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01128810, void, Restart, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01128880, void, RestartReverse, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01128910, void, OnMaterialChanged, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01128920, void, CacheShaderInformation, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01128D50, void, AnimateIt, (app::LegacyTransparancyAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00579090, void, RestoreToOriginalState, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01129100, void, ctor, (app::LegacyTransparancyAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01129140, void, cctor, ())
} // namespace app::classes::LegacyTransparancyAnimator
