#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BasicConstraintsExtension.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Extension_2.h>

namespace app::classes::Mono::Security::X509::Extensions::BasicConstraintsExtension {
    IL2CPP_REGISTER_METHOD(0x0291D710, void, ctor, (app::BasicConstraintsExtension * this_ptr, app::X509Extension_2* extension))
    IL2CPP_REGISTER_METHOD(0x0291E0C0, void, Decode, (app::BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291E2F0, void, Encode, (app::BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CertificateAuthority, (app::BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291E660, app::String*, get_Name, (app::BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0291E6E0, app::String*, ToString, (app::BasicConstraintsExtension * this_ptr))
} // namespace app::classes::Mono::Security::X509::Extensions::BasicConstraintsExtension
