#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberPoolSettings.h>

namespace app::classes::UberPoolSettings {
    IL2CPP_REGISTER_METHOD(0x00FED1B0, void, ctor, (app::UberPoolSettings * this_ptr))
}
