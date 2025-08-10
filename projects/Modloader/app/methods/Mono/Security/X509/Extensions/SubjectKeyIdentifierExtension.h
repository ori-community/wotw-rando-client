#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SubjectKeyIdentifierExtension.h>
#include <Modloader/app/structs/X509Extension_2.h>

namespace app::classes::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension {
    IL2CPP_REGISTER_METHOD(0x0291D710, void, ctor, app::SubjectKeyIdentifierExtension* this_ptr, app::X509Extension_2* extension)
    IL2CPP_REGISTER_METHOD(0x029228C0, void, Decode, app::SubjectKeyIdentifierExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02922A80, void, Encode, app::SubjectKeyIdentifierExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02922CE0, app::String*, get_Name, app::SubjectKeyIdentifierExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02922D60, app::Byte__Array*, get_Identifier, app::SubjectKeyIdentifierExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02922EB0, app::String*, ToString, app::SubjectKeyIdentifierExtension* this_ptr)
} // namespace app::classes::Mono::Security::X509::Extensions::SubjectKeyIdentifierExtension
