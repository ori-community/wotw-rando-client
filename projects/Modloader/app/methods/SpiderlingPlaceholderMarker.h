#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderlingPlaceholderMarker.h>

namespace app::classes::SpiderlingPlaceholderMarker {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiderlingPlaceholderMarker * this_ptr))
}
