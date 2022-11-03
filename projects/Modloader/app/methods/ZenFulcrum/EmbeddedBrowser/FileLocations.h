#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::FileLocations {
    IL2CPP_REGISTER_METHOD(0x01DDDD80, app::FileLocations_CEFDirs*, get_Dirs, ())
    IL2CPP_REGISTER_METHOD(0x01DDDE20, app::FileLocations_CEFDirs*, GetCEFDirs, ())
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::FileLocations
