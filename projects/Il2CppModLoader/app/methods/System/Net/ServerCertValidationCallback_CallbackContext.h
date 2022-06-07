#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::ServerCertValidationCallback_CallbackContext {
    IL2CPP_REGISTER_METHOD(0x01BD3970, void, ctor, (app::ServerCertValidationCallback_CallbackContext * this_ptr, app::Object * request, app::X509Certificate_1 * certificate, app::X509Chain * chain, app::SslPolicyErrors__Enum ssl_policy_errors))
}
