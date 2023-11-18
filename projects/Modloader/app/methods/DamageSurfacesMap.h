#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageSurfacesMap.h>

namespace app::classes::DamageSurfacesMap {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::DamageSurfacesMap * this_ptr))
}
