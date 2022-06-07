#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::IO::Compression::Crc32Helper {
    IL2CPP_REGISTER_METHOD(0x02B71F10, uint32_t, UpdateCrc32, (uint32_t crc32, app::Byte__Array * buffer, int32_t offset, int32_t length))
    IL2CPP_REGISTER_METHOD(0x02B72060, void, cctor, ())
}
