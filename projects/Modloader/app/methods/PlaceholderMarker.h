#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlaceholderMarker.h>

namespace app::classes::PlaceholderMarker {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlaceholderMarker * this_ptr))
}
