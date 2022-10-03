#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LegacyRotateAnimator {
    IL2CPP_REGISTER_METHOD(0x00A348C0, void, Awake, (app::LegacyRotateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A348E0, void, Initalize, (app::LegacyRotateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A349C0, void, OnPoolSpawned, (app::LegacyRotateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A34AE0, void, Restart, (app::LegacyRotateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A34B80, void, RestartReverse, (app::LegacyRotateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A34C40, void, AnimateIt, (app::LegacyRotateAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyRotateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A34E60, void, ctor, (app::LegacyRotateAnimator * this_ptr))
} // namespace app::classes::LegacyRotateAnimator
