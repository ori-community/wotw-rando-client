#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ResetSettingsToDefaultAction {
    IL2CPP_REGISTER_METHOD(0x00905300, void, Perform, (app::ResetSettingsToDefaultAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ResetSettingsToDefaultAction * this_ptr))
} // namespace app::classes::ResetSettingsToDefaultAction
