#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkWindowsSettings {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::AkCommonUserSettings*, GetUserSettings, (app::AkWindowsSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::AkCommonAdvancedSettings*, GetAdvancedSettings, (app::AkWindowsSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::AkCommonCommSettings*, GetCommsSettings, (app::AkWindowsSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02702C80, void, ctor, (app::AkWindowsSettings * this_ptr))
} // namespace app::classes::AkWindowsSettings
