#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberWaterReflectionPlane.h>
#include <Modloader/app/structs/UberWaterTop.h>

namespace app::classes::UberWaterReflectionPlane {
    IL2CPP_REGISTER_METHOD(0x012A1600, void, ctor, app::UberWaterReflectionPlane* this_ptr, app::UberWaterTop* plane, app::Renderer* renderer)
}
