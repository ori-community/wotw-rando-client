#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HyperHasher.h>

namespace app::classes::HyperHasher {
    IL2CPP_REGISTER_METHOD(0x025571C0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02557300, uint8_t, get_HashSize, ())
    IL2CPP_REGISTER_METHOD(0x025573A0, void, set_HashSize, (uint8_t value))
    IL2CPP_REGISTER_METHOD(0x02557470, uint32_t, Hash_1, (int32_t part1, int32_t part2, int32_t part3))
    IL2CPP_REGISTER_METHOD(0x025575B0, uint32_t, Hash_2, (int32_t part1, int32_t part2))
    IL2CPP_REGISTER_METHOD(0x025576C0, void, Partition, (int32_t value, app::Byte__Array* into, int32_t* start))
    IL2CPP_REGISTER_METHOD(0x02557780, uint32_t, HashFast_1, (int32_t part1, int32_t part2))
    IL2CPP_REGISTER_METHOD(0x02557800, uint32_t, HashFast_2, (int32_t part1, int32_t part2, int32_t part3))
    IL2CPP_REGISTER_METHOD(0x025578C0, uint32_t, Compute, (app::Byte__Array * bytes, int32_t length))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HyperHasher * this_ptr))
} // namespace app::classes::HyperHasher
