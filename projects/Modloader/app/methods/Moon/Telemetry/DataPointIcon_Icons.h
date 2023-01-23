#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/DataPointType__Enum.h>

namespace app::classes::Moon::Telemetry::DataPointIcon_Icons {
    IL2CPP_REGISTER_METHOD(0x00E32B90, app::Texture2D*, GetIcon, (app::DataPointType__Enum icon_type))
    IL2CPP_REGISTER_METHOD(0x00E32CE0, void, cctor, ())
} // namespace app::classes::Moon::Telemetry::DataPointIcon_Icons
