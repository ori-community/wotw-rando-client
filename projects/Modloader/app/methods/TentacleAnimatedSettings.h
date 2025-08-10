#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TentacleAnimatedSettings.h>

namespace app::classes::TentacleAnimatedSettings {
    IL2CPP_REGISTER_METHOD(0x00CEB0F0, app::TentacleAnimatedSettings, Lerp, app::TentacleAnimatedSettings from, app::TentacleAnimatedSettings to, float t)
    IL2CPP_REGISTER_METHOD(0x00CEB3B0, bool, Equals, app::TentacleAnimatedSettings a, app::TentacleAnimatedSettings b)
} // namespace app::classes::TentacleAnimatedSettings
