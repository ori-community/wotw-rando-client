#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrabbableSurfaceSettings.h>

namespace app::classes::GrabbableSurfaceSettings {
    IL2CPP_REGISTER_METHOD(0x010828F0, void, ctor, (app::GrabbableSurfaceSettings * this_ptr))
}
