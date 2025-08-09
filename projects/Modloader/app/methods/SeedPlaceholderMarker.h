#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeedPlaceholderMarker.h>

namespace app::classes::SeedPlaceholderMarker {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeedPlaceholderMarker* this_ptr)
}
