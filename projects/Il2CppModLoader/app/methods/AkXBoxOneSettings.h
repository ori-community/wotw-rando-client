#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkXBoxOneSettings {
    IL2CPP_REGISTER_METHOD(0x027084F0, void, ctor, (app::AkXBoxOneSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::AkCommonUserSettings *, GetUserSettings, (app::AkXBoxOneSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::AkCommonAdvancedSettings *, GetAdvancedSettings, (app::AkXBoxOneSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::AkCommonCommSettings *, GetCommsSettings, (app::AkXBoxOneSettings * this_ptr))
}
