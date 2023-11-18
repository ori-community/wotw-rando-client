#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraRenderExporter.h>

namespace app::classes::CameraRenderExporter {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraRenderExporter * this_ptr))
}
