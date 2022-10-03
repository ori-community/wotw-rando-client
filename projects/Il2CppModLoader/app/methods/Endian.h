#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Endian {
    IL2CPP_REGISTER_METHOD(0x01B5A600, void, PutBytes2_1, (app::Byte__Array * bytes, int32_t offset, int16_t value))
    IL2CPP_REGISTER_METHOD(0x01B5A600, void, PutBytes2_2, (app::Byte__Array * bytes, int32_t offset, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x01B5A660, void, PutBytes4_1, (app::Byte__Array * bytes, int32_t offset, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01B5A660, void, PutBytes4_2, (app::Byte__Array * bytes, int32_t offset, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01B5A670, void, PutBytes8_1, (app::Byte__Array * bytes, int32_t offset, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01B5A670, void, PutBytes8_2, (app::Byte__Array * bytes, int32_t offset, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x01B5A680, int16_t, GetShort, (app::Byte__Array * bytes, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01B5A680, uint16_t, GetUShort, (app::Byte__Array * bytes, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01B5A6E0, int32_t, GetInt, (app::Byte__Array * bytes, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01B5A6E0, uint32_t, GetUInt, (app::Byte__Array * bytes, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01B5A6F0, int64_t, GetLong, (app::Byte__Array * bytes, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01B5A6F0, uint64_t, GetULong, (app::Byte__Array * bytes, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01B5A700, void, WriteEndian_1, (app::Byte__Array * bytes, int32_t offset, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x01B5A870, uint64_t, ReadEndian8, (app::Byte__Array * bytes, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01B5AA20, void, WriteEndian_2, (app::Byte__Array * bytes, int32_t offset, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01B5AAD0, uint32_t, ReadEndian4, (app::Byte__Array * bytes, int32_t offset))
    IL2CPP_REGISTER_METHOD(0x01B5A600, void, WriteEndian_3, (app::Byte__Array * bytes, int32_t offset, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x01B5A680, uint16_t, ReadEndian2, (app::Byte__Array * bytes, int32_t offset))
} // namespace app::classes::Endian
