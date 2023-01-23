#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RNGCryptoServiceProvider.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CspParameters.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::RNGCryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x028E3DB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x028E3E20, void, ctor_1, (app::RNGCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E3ED0, void, ctor_2, (app::RNGCryptoServiceProvider * this_ptr, app::Byte__Array* rgb))
    IL2CPP_REGISTER_METHOD(0x028E3F90, void, ctor_3, (app::RNGCryptoServiceProvider * this_ptr, app::CspParameters* csp_params))
    IL2CPP_REGISTER_METHOD(0x028E4040, void, ctor_4, (app::RNGCryptoServiceProvider * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x028E4150, void, Check, (app::RNGCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735FD8, RNGCryptoServiceProvider_Check__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RngOpen, ())
    IL2CPP_REGISTER_METHOD(0x028E4210, void*, RngInitialize, (app::Byte__Array * seed))
    IL2CPP_REGISTER_METHOD(0x028E4220, void*, RngGetBytes, (void* handle, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x028E42A0, void, RngClose, (void* handle))
    IL2CPP_REGISTER_METHOD(0x028E42B0, void, GetBytes, (app::RNGCryptoServiceProvider * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHODINFO(0x04732F78, RNGCryptoServiceProvider_GetBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E45A0, void, GetNonZeroBytes, (app::RNGCryptoServiceProvider * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHODINFO(0x04743750, RNGCryptoServiceProvider_GetNonZeroBytes__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028E47A0, void, Finalize, (app::RNGCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::RNGCryptoServiceProvider * this_ptr, bool disposing))
} // namespace app::classes::System::Security::Cryptography::RNGCryptoServiceProvider
