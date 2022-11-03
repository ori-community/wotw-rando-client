#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MurmurHash2 {
    IL2CPP_REGISTER_METHOD(0x027198C0, uint32_t, Hash_1, (app::BinaryReader * reader, int32_t size))
    IL2CPP_REGISTER_METHOD(0x027198D0, uint32_t, Hash_2, (app::Byte__Array * data))
    IL2CPP_REGISTER_METHOD(0x027198E0, uint32_t, Hash_3, (app::BinaryReader * reader, int32_t size, uint32_t seed))
    IL2CPP_REGISTER_METHOD(0x02719B00, uint32_t, Hash_4, (app::Byte__Array * data, uint32_t seed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MurmurHash2 * this_ptr))
} // namespace app::classes::MurmurHash2
