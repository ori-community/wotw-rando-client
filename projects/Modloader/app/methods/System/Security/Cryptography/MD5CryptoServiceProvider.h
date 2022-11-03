#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::MD5CryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x020DD610, void, ctor, (app::MD5CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DD6E0, void, Finalize, (app::MD5CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DD760, void, Dispose, (app::MD5CryptoServiceProvider * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x020DD7F0, void, HashCore, (app::MD5CryptoServiceProvider * this_ptr, app::Byte__Array* rgb, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x020DD910, app::Byte__Array*, HashFinal, (app::MD5CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DDA60, void, Initialize, (app::MD5CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DDB30, void, ProcessBlock, (app::MD5CryptoServiceProvider * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset))
    IL2CPP_REGISTER_METHOD(0x020DF460, void, ProcessFinalBlock, (app::MD5CryptoServiceProvider * this_ptr, app::Byte__Array* input_buffer, int32_t input_offset, int32_t input_count))
    IL2CPP_REGISTER_METHOD(0x020DF660, void, AddLength, (app::MD5CryptoServiceProvider * this_ptr, uint64_t length, app::Byte__Array* buffer, int32_t position))
    IL2CPP_REGISTER_METHOD(0x020DF7D0, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::MD5CryptoServiceProvider
