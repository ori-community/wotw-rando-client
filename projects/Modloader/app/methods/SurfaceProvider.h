#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SurfaceProvider.h>

namespace app::classes::SurfaceProvider {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SurfaceProvider * this_ptr))
}
