#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/X509CertificateImpl.h>
#include <Modloader/app/structs/X509Helper2_MyNativeHelper.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Helper2_MyNativeHelper {
    IL2CPP_REGISTER_METHOD(0x0257C600, app::X509CertificateImpl*, Import, (app::X509Helper2_MyNativeHelper * this_ptr, app::X509Certificate_1* cert))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::X509Helper2_MyNativeHelper * this_ptr))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Helper2_MyNativeHelper
