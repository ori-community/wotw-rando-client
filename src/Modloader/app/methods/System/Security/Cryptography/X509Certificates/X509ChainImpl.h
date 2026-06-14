#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/X509ChainImpl.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509ChainImpl {
    IL2CPP_REGISTER_METHOD(0x021CE880, void, Dispose_1, app::X509ChainImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, app::X509ChainImpl* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x021CE930, void, Finalize, app::X509ChainImpl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::X509ChainImpl* this_ptr)
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509ChainImpl
