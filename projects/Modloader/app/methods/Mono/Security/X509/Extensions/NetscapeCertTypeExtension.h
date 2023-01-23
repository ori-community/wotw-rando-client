#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NetscapeCertTypeExtension.h>
#include <Modloader/app/structs/X509Extension_2.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/NetscapeCertTypeExtension_CertTypes__Enum.h>

namespace app::classes::Mono::Security::X509::Extensions::NetscapeCertTypeExtension {
    IL2CPP_REGISTER_METHOD(0x0291D710, void, ctor, (app::NetscapeCertTypeExtension * this_ptr, app::X509Extension_2* extension))
    IL2CPP_REGISTER_METHOD(0x02921BA0, void, Decode, (app::NetscapeCertTypeExtension * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04702280, NetscapeCertTypeExtension_Decode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02921DD0, app::String*, get_Name, (app::NetscapeCertTypeExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02921E50, bool, Support, (app::NetscapeCertTypeExtension * this_ptr, app::NetscapeCertTypeExtension_CertTypes__Enum usage))
    IL2CPP_REGISTER_METHOD(0x02921F50, app::String*, ToString, (app::NetscapeCertTypeExtension * this_ptr))
} // namespace app::classes::Mono::Security::X509::Extensions::NetscapeCertTypeExtension
