#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCommonAdvancedSettings.h>
#include <Modloader/app/structs/AkCommonCommSettings.h>
#include <Modloader/app/structs/AkCommonUserSettings.h>
#include <Modloader/app/structs/AkXBoxOneSettings.h>

namespace app::classes::AkXBoxOneSettings {
    IL2CPP_REGISTER_METHOD(0x027084F0, void, ctor, app::AkXBoxOneSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::AkCommonUserSettings*, GetUserSettings, app::AkXBoxOneSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::AkCommonAdvancedSettings*, GetAdvancedSettings, app::AkXBoxOneSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::AkCommonCommSettings*, GetCommsSettings, app::AkXBoxOneSettings* this_ptr)
} // namespace app::classes::AkXBoxOneSettings
