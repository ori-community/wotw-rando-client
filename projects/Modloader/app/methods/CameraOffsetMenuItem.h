#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraOffsetMenuItem.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CameraOffsetMenuItem {
    IL2CPP_REGISTER_METHOD(0x0169B4A0, void, ctor, (app::CameraOffsetMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x0169B640, void, DebugOffset, (app::Vector2 modifier))
    IL2CPP_REGISTER_METHOD(0x0169B7E0, void, OnSelectedFixedUpdate, (app::CameraOffsetMenuItem * this_ptr))
} // namespace app::classes::CameraOffsetMenuItem
