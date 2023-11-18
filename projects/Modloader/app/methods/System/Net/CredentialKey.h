#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CredentialKey.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Net::CredentialKey {
    IL2CPP_REGISTER_METHOD(0x01EABCD0, void, ctor, (app::CredentialKey * this_ptr, app::Uri* uri_prefix, app::String* authentication_type))
    IL2CPP_REGISTER_METHOD(0x01EABD30, bool, Match, (app::CredentialKey * this_ptr, app::Uri* uri, app::String* authentication_type))
    IL2CPP_REGISTER_METHOD(0x01EABEF0, bool, IsPrefix, (app::CredentialKey * this_ptr, app::Uri* uri, app::Uri* prefix_uri))
    IL2CPP_REGISTER_METHOD(0x01EAC0C0, int32_t, GetHashCode, (app::CredentialKey * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EAC150, bool, Equals, (app::CredentialKey * this_ptr, app::Object* comparand))
    IL2CPP_REGISTER_METHOD(0x01EAC350, app::String*, ToString, (app::CredentialKey * this_ptr))
} // namespace app::classes::System::Net::CredentialKey
