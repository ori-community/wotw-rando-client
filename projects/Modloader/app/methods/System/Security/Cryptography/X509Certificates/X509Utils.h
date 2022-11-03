#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Utils {
    IL2CPP_REGISTER_METHOD(0x02580090, app::String*, FindOidInfo, (uint32_t key_type, app::String* key_value, app::OidGroup__Enum oid_group))
    IL2CPP_REGISTER_METHODINFO(0x0471B638, X509Utils_FindOidInfo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025801E0, app::String*, FindOidInfoWithFallback, (uint32_t key, app::String* value, app::OidGroup__Enum group))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Utils
