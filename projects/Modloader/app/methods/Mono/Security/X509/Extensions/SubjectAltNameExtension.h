#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/SubjectAltNameExtension.h>
#include <Modloader/app/structs/X509Extension_2.h>

namespace app::classes::Mono::Security::X509::Extensions::SubjectAltNameExtension {
    IL2CPP_REGISTER_METHOD(0x0291D710, void, ctor, app::SubjectAltNameExtension* this_ptr, app::X509Extension_2* extension)
    IL2CPP_REGISTER_METHOD(0x02922360, void, Decode, app::SubjectAltNameExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029225E0, app::String*, get_Name, app::SubjectAltNameExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02922660, app::String__Array*, get_DNSNames, app::SubjectAltNameExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02922790, app::String__Array*, get_IPAddresses, app::SubjectAltNameExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02384AA0, app::String*, ToString, app::SubjectAltNameExtension* this_ptr)
} // namespace app::classes::Mono::Security::X509::Extensions::SubjectAltNameExtension
