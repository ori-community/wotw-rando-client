#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Angle.h>

namespace app::classes::Swing::Vector3Ext {
    IL2CPP_REGISTER_METHOD(0x018315B0, app::Vector3, uniform, (float _xyz))
    IL2CPP_REGISTER_METHOD(0x018315D0, app::Vector3, uniform2d, (float _xy, float _z))
    IL2CPP_REGISTER_METHOD(0x018315F0, app::Angle, angle_1, (app::Vector3 _a, app::Vector3 _b))
    IL2CPP_REGISTER_METHOD(0x01831700, app::Angle, angle_2, (app::Vector3 _from, app::Vector3 _to, app::Vector3 _normal))
} // namespace app::classes::Swing::Vector3Ext
