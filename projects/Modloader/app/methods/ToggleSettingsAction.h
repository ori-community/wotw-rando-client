#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ToggleSettingsAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ToggleSettingsAction {
    IL2CPP_REGISTER_METHOD(0x00AFD570, void, Perform, (app::ToggleSettingsAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00AFE430, void, PlaySound, (app::ToggleSettingsAction * this_ptr, bool on))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ToggleSettingsAction * this_ptr))
} // namespace app::classes::ToggleSettingsAction
