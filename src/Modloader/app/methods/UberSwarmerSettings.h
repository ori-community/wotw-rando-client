#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberSwarmerSettings.h>

namespace app::classes::UberSwarmerSettings {
    IL2CPP_REGISTER_METHOD(0x01290240, void, ctor, app::UberSwarmerSettings* this_ptr)
}
