#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Ionic::Zlib::Adler {
    IL2CPP_REGISTER_METHOD(0x03064F10, uint32_t, Adler32, (uint32_t adler, app::Byte__Array* buf, int32_t index, int32_t len))
    IL2CPP_REGISTER_METHOD(0x030653C0, void, cctor, ())
} // namespace app::classes::Ionic::Zlib::Adler
