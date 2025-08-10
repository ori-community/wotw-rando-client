#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::Swing::Vector4Ext {
    IL2CPP_REGISTER_METHOD(0x0182E070, app::Vector4, concat, app::Vector2 _xy, app::Vector2 _zw)
}
