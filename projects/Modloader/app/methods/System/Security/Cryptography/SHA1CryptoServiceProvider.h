#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::SHA1CryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x028F4690, void, ctor, (app::SHA1CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F4880, void, Finalize, (app::SHA1CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DBBD0, void, Dispose, (app::SHA1CryptoServiceProvider * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x028F4900, void, HashCore, (app::SHA1CryptoServiceProvider * this_ptr, app::Byte__Array* rgb, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x028F4A30, app::Byte__Array*, HashFinal, (app::SHA1CryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F4BA0, void, Initialize, (app::SHA1CryptoServiceProvider * this_ptr))
} // namespace app::classes::System::Security::Cryptography::SHA1CryptoServiceProvider
