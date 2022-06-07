#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkXBoxOneSettings_PlatformAdvancedSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo_1, (app::AkXBoxOneSettings_PlatformAdvancedSettings * this_ptr, app::AkPlatformInitSettings * settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CopyTo_2, (app::AkXBoxOneSettings_PlatformAdvancedSettings * this_ptr, app::AkUnityPlatformSpecificSettings * settings))
    IL2CPP_REGISTER_METHOD(0x02708A20, void, ctor, (app::AkXBoxOneSettings_PlatformAdvancedSettings * this_ptr))
}
