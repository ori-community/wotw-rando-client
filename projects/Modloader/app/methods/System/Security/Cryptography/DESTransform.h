#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::DESTransform {
    IL2CPP_REGISTER_METHOD(0x020D1FF0, void, ctor, (app::DESTransform * this_ptr, app::SymmetricAlgorithm* symm_algo, bool encryption, app::Byte__Array* key, app::Byte__Array* iv))
    IL2CPP_REGISTER_METHODINFO(0x04793038, DESTransform__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D2410, uint32_t, CipherFunct, (app::DESTransform * this_ptr, uint32_t r, int32_t n))
    IL2CPP_REGISTER_METHOD(0x020D2850, void, Permutation, (app::Byte__Array * input, app::Byte__Array* output, app::UInt32__Array* perm_tab, bool pre_swap))
    IL2CPP_REGISTER_METHOD(0x020D2E10, void, BSwap, (app::Byte__Array * byte_buff))
    IL2CPP_REGISTER_METHOD(0x020D2FB0, void, SetKey, (app::DESTransform * this_ptr, app::Byte__Array* key))
    IL2CPP_REGISTER_METHOD(0x020D34E0, void, ProcessBlock, (app::DESTransform * this_ptr, app::Byte__Array* input, app::Byte__Array* output))
    IL2CPP_REGISTER_METHOD(0x020D3A00, void, ECB, (app::DESTransform * this_ptr, app::Byte__Array* input, app::Byte__Array* output))
    IL2CPP_REGISTER_METHOD(0x020D3B10, app::Byte__Array*, GetStrongKey, ())
    IL2CPP_REGISTER_METHOD(0x020D3C60, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::DESTransform
