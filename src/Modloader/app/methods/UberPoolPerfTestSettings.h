#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberPoolPerfTestSettings.h>

namespace app::classes::UberPoolPerfTestSettings {
    IL2CPP_REGISTER_METHOD(0x00FED180, void, ctor, app::UberPoolPerfTestSettings* this_ptr)
}
