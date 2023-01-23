#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Level2Map.h>

namespace app::classes::Mono::Globalization::Unicode::Level2Map {
    IL2CPP_REGISTER_METHOD(0x023BA2B0, void, ctor, (app::Level2Map * this_ptr, uint8_t source, uint8_t replace))
}
