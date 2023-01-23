#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BatSwarmerSettings.h>

namespace app::classes::BatSwarmerSettings {
    IL2CPP_REGISTER_METHOD(0x00F97980, void, ctor, (app::BatSwarmerSettings * this_ptr))
}
