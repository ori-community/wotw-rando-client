#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyCameraSettingsAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Restart, (app::LegacyCameraSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AnimateIt, (app::LegacyCameraSettingsAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::LegacyCameraSettingsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005790B0, void, ctor, (app::LegacyCameraSettingsAnimator * this_ptr))
} // namespace app::classes::LegacyCameraSettingsAnimator
