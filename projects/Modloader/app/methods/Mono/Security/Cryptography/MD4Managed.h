#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MD4Managed.h>
#include <Modloader/app/structs/MD4Managed_1.h>
#include <Modloader/app/structs/UInt32__Array.h>

namespace app::classes::Mono::Security::Cryptography::MD4Managed {
    IL2CPP_REGISTER_METHOD(0x025CF410, void, ctor_1, app::MD4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CF510, void, Initialize_1, app::MD4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CF680, void, HashCore_1, app::MD4Managed* this_ptr, app::Byte__Array* array, int32_t ib_start, int32_t cb_size)
    IL2CPP_REGISTER_METHOD(0x025CF870, app::Byte__Array*, HashFinal_1, app::MD4Managed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CFA80, app::Byte__Array*, Padding_1, app::MD4Managed* this_ptr, int32_t n_length)
    IL2CPP_REGISTER_METHOD(0x025CFB30, uint32_t, F_1, app::MD4Managed* this_ptr, uint32_t x, uint32_t y, uint32_t z)
    IL2CPP_REGISTER_METHOD(0x025CFB40, uint32_t, G_1, app::MD4Managed* this_ptr, uint32_t x, uint32_t y, uint32_t z)
    IL2CPP_REGISTER_METHOD(0x025CFB50, uint32_t, H_1, app::MD4Managed* this_ptr, uint32_t x, uint32_t y, uint32_t z)
    IL2CPP_REGISTER_METHOD(0x025CFB60, uint32_t, ROL_1, app::MD4Managed* this_ptr, uint32_t x, uint8_t n)
    IL2CPP_REGISTER_METHOD(0x025CFB80, void, FF_1, app::MD4Managed* this_ptr, uint32_t* a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s)
    IL2CPP_REGISTER_METHOD(0x025CFBC0, void, GG_1, app::MD4Managed* this_ptr, uint32_t* a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s)
    IL2CPP_REGISTER_METHOD(0x025CFC10, void, HH_1, app::MD4Managed* this_ptr, uint32_t* a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s)
    IL2CPP_REGISTER_METHOD(0x025CFC60, void, Encode_1, app::MD4Managed* this_ptr, app::Byte__Array* output, app::UInt32__Array* input)
    IL2CPP_REGISTER_METHOD(0x025CFDC0, void, Decode_1, app::MD4Managed* this_ptr, app::UInt32__Array* output, app::Byte__Array* input, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025CFED0, void, MD4Transform_1, app::MD4Managed* this_ptr, app::UInt32__Array* state, app::Byte__Array* block, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02A3DBE0, void, ctor_2, app::MD4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CF510, void, Initialize_2, app::MD4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CF680, void, HashCore_2, app::MD4Managed_1* this_ptr, app::Byte__Array* array, int32_t ib_start, int32_t cb_size)
    IL2CPP_REGISTER_METHOD(0x02A3DCE0, app::Byte__Array*, HashFinal_2, app::MD4Managed_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A3DEF0, app::Byte__Array*, Padding_2, app::MD4Managed_1* this_ptr, int32_t n_length)
    IL2CPP_REGISTER_METHOD(0x025CFB30, uint32_t, F_2, app::MD4Managed_1* this_ptr, uint32_t x, uint32_t y, uint32_t z)
    IL2CPP_REGISTER_METHOD(0x025CFB40, uint32_t, G_2, app::MD4Managed_1* this_ptr, uint32_t x, uint32_t y, uint32_t z)
    IL2CPP_REGISTER_METHOD(0x025CFB50, uint32_t, H_2, app::MD4Managed_1* this_ptr, uint32_t x, uint32_t y, uint32_t z)
    IL2CPP_REGISTER_METHOD(0x025CFB60, uint32_t, ROL_2, app::MD4Managed_1* this_ptr, uint32_t x, uint8_t n)
    IL2CPP_REGISTER_METHOD(0x025CFB80, void, FF_2, app::MD4Managed_1* this_ptr, uint32_t* a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s)
    IL2CPP_REGISTER_METHOD(0x025CFBC0, void, GG_2, app::MD4Managed_1* this_ptr, uint32_t* a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s)
    IL2CPP_REGISTER_METHOD(0x025CFC10, void, HH_2, app::MD4Managed_1* this_ptr, uint32_t* a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s)
    IL2CPP_REGISTER_METHOD(0x025CFC60, void, Encode_2, app::MD4Managed_1* this_ptr, app::Byte__Array* output, app::UInt32__Array* input)
    IL2CPP_REGISTER_METHOD(0x025CFDC0, void, Decode_2, app::MD4Managed_1* this_ptr, app::UInt32__Array* output, app::Byte__Array* input, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025CFED0, void, MD4Transform_2, app::MD4Managed_1* this_ptr, app::UInt32__Array* state, app::Byte__Array* block, int32_t index)
} // namespace app::classes::Mono::Security::Cryptography::MD4Managed
