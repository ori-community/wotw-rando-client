#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::RIPEMD160Managed {
    IL2CPP_REGISTER_METHOD(0x028E0A70, void, ctor, (app::RIPEMD160Managed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A6C8, RIPEMD160Managed__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E0B30, void, Initialize, (app::RIPEMD160Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E0B80, void, HashCore, (app::RIPEMD160Managed * this_ptr, app::Byte__Array* rgb, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x028E0B90, app::Byte__Array*, HashFinal, (app::RIPEMD160Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E0BA0, void, InitializeState, (app::RIPEMD160Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E0CA0, void, _HashData, (app::RIPEMD160Managed * this_ptr, app::Byte__Array* part_in, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x028E0E40, app::Byte__Array*, _EndHash, (app::RIPEMD160Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E10E0, void, MDTransform, (uint32_t * block_d_words, uint32_t* state, uint8_t* block))
    IL2CPP_REGISTER_METHOD(0x028E3D60, uint32_t, F, (uint32_t x, uint32_t y, uint32_t z))
    IL2CPP_REGISTER_METHOD(0x028E3D70, uint32_t, G, (uint32_t x, uint32_t y, uint32_t z))
    IL2CPP_REGISTER_METHOD(0x028E3D80, uint32_t, H, (uint32_t x, uint32_t y, uint32_t z))
    IL2CPP_REGISTER_METHOD(0x028E3D90, uint32_t, I, (uint32_t x, uint32_t y, uint32_t z))
    IL2CPP_REGISTER_METHOD(0x028E3DA0, uint32_t, J, (uint32_t x, uint32_t y, uint32_t z))
} // namespace app::classes::System::Security::Cryptography::RIPEMD160Managed
