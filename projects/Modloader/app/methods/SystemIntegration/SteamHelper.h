#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SystemIntegration::SteamHelper {
    IL2CPP_REGISTER_METHOD(0x0052A130, bool, get_TestInEditor, )
    IL2CPP_REGISTER_METHOD(0x0052A1F0, void, set_TestInEditor, bool value)
} // namespace app::classes::SystemIntegration::SteamHelper
