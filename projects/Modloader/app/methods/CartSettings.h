#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartSettings.h>

namespace app::classes::CartSettings {
    IL2CPP_REGISTER_METHOD(0x00B3E9C0, void, ctor, (app::CartSettings * this_ptr))
}
