#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthorityKeyIdentifierExtension.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Extension_2.h>

namespace app::classes::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension {
    IL2CPP_REGISTER_METHOD(0x0291D710, void, ctor, app::AuthorityKeyIdentifierExtension* this_ptr, app::X509Extension_2* extension)
    IL2CPP_REGISTER_METHOD(0x0291D720, void, Decode, app::AuthorityKeyIdentifierExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291D930, void, Encode, app::AuthorityKeyIdentifierExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291DC70, app::String*, get_Name, app::AuthorityKeyIdentifierExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291DCF0, app::Byte__Array*, get_Identifier, app::AuthorityKeyIdentifierExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291DE40, app::String*, ToString, app::AuthorityKeyIdentifierExtension* this_ptr)
} // namespace app::classes::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension
