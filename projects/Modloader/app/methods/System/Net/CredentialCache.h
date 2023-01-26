#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CredentialCache.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/NetworkCredential.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Net::CredentialCache {
    IL2CPP_REGISTER_METHOD(0x01EA98F0, bool, get_IsDefaultInCache, (app::CredentialCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA9900, void, ctor, (app::CredentialCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EA9B30, void, Add_1, (app::CredentialCache * this_ptr, app::Uri* uri_prefix, app::String* auth_type, app::NetworkCredential* cred))
    IL2CPP_REGISTER_METHOD(0x01EA9E30, void, Add_2, (app::CredentialCache * this_ptr, app::String* host, int32_t port, app::String* authentication_type, app::NetworkCredential* credential))
    IL2CPP_REGISTER_METHOD(0x01EAA1B0, void, Remove_1, (app::CredentialCache * this_ptr, app::Uri* uri_prefix, app::String* auth_type))
    IL2CPP_REGISTER_METHOD(0x01EAA3E0, void, Remove_2, (app::CredentialCache * this_ptr, app::String* host, int32_t port, app::String* authentication_type))
    IL2CPP_REGISTER_METHOD(0x01EAA5C0, app::NetworkCredential*, GetCredential_1, (app::CredentialCache * this_ptr, app::Uri* uri_prefix, app::String* auth_type))
    IL2CPP_REGISTER_METHOD(0x01EAA8E0, app::NetworkCredential*, GetCredential_2, (app::CredentialCache * this_ptr, app::String* host, int32_t port, app::String* authentication_type))
    IL2CPP_REGISTER_METHOD(0x01EAAC70, app::IEnumerator*, GetEnumerator, (app::CredentialCache * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAADF0, app::ICredentials*, get_DefaultCredentials, ())
    IL2CPP_REGISTER_METHOD(0x01EAAE90, app::NetworkCredential*, get_DefaultNetworkCredentials, ())
} // namespace app::classes::System::Net::CredentialCache
