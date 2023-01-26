#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CredentialHostKey.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::CredentialHostKey {
    IL2CPP_REGISTER_METHOD(0x01EAB330, void, ctor, (app::CredentialHostKey * this_ptr, app::String* host, int32_t port, app::String* authentication_type))
    IL2CPP_REGISTER_METHOD(0x01EAB340, bool, Match, (app::CredentialHostKey * this_ptr, app::String* host, int32_t port, app::String* authentication_type))
    IL2CPP_REGISTER_METHOD(0x01EAB570, int32_t, GetHashCode, (app::CredentialHostKey * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAB610, bool, Equals, (app::CredentialHostKey * this_ptr, app::Object* comparand))
    IL2CPP_REGISTER_METHOD(0x01EAB8F0, app::String*, ToString, (app::CredentialHostKey * this_ptr))
} // namespace app::classes::System::Net::CredentialHostKey
