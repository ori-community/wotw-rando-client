#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkSettingsValidationHandler.h>

namespace app::classes::AkSettingsValidationHandler {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Validate, app::AkSettingsValidationHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AkSettingsValidationHandler* this_ptr)
} // namespace app::classes::AkSettingsValidationHandler
