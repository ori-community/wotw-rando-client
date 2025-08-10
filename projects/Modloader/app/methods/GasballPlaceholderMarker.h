#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GasballPlaceholderMarker.h>

namespace app::classes::GasballPlaceholderMarker {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::GasballPlaceholderMarker* this_ptr)
}
