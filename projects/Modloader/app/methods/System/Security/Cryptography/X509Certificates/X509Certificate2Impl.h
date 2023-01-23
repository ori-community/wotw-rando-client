#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/X509Certificate2Impl.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2Impl {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::X509Certificate2Impl * this_ptr))
}
