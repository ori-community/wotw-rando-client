#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraInfluencePositionZone {
    IL2CPP_REGISTER_METHOD(0x016927A0, app::Vector3, get_Offset, (app::CameraInfluencePositionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraInfluencePositionZone * this_ptr))
} // namespace app::classes::CameraInfluencePositionZone
