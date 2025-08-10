#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetCameraSettingsAction.h>

namespace app::classes::SetCameraSettingsAction {
    IL2CPP_REGISTER_METHOD(0x005A1C90, void, Perform, app::SetCameraSettingsAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005A1EB0, void, ctor, app::SetCameraSettingsAction* this_ptr)
} // namespace app::classes::SetCameraSettingsAction
