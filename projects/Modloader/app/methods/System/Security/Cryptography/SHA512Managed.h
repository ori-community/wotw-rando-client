#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SHA512Managed.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Security::Cryptography::SHA512Managed {
    IL2CPP_REGISTER_METHOD(0x01E0E5F0, void, ctor, (app::SHA512Managed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759610, SHA512Managed__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E0E6B0, void, Initialize, (app::SHA512Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0E700, void, HashCore, (app::SHA512Managed * this_ptr, app::Byte__Array* rgb, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x01E0E710, app::Byte__Array*, HashFinal, (app::SHA512Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0E720, void, InitializeState, (app::SHA512Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0E920, void, _HashData, (app::SHA512Managed * this_ptr, app::Byte__Array* part_in, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x01E0EB50, app::Byte__Array*, _EndHash, (app::SHA512Managed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0EDF0, void, SHATransform, (uint64_t * expanded_buffer, uint64_t* state, uint8_t* block))
    IL2CPP_REGISTER_METHOD(0x01E0F690, uint64_t, RotateRight, (uint64_t x, int32_t n))
    IL2CPP_REGISTER_METHOD(0x01E0F6B0, uint64_t, Ch, (uint64_t x, uint64_t y, uint64_t z))
    IL2CPP_REGISTER_METHOD(0x01E0F6C0, uint64_t, Maj, (uint64_t x, uint64_t y, uint64_t z))
    IL2CPP_REGISTER_METHOD(0x01E0F6D0, uint64_t, Sigma_0, (uint64_t x))
    IL2CPP_REGISTER_METHOD(0x01E0F7A0, uint64_t, Sigma_1, (uint64_t x))
    IL2CPP_REGISTER_METHOD(0x01E0F870, uint64_t, sigma_0, (uint64_t x))
    IL2CPP_REGISTER_METHOD(0x01E0F930, uint64_t, sigma_1, (uint64_t x))
    IL2CPP_REGISTER_METHOD(0x01E0F9F0, void, SHA512Expand, (uint64_t * x))
    IL2CPP_REGISTER_METHOD(0x01E0FAE0, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::SHA512Managed
