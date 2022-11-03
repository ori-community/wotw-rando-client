#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::X509::X509Crl_X509CrlEntry {
    IL2CPP_REGISTER_METHOD(0x03164BB0, void, ctor_1, (app::X509Crl_X509CrlEntry * this_ptr, app::Byte__Array* serial_number, app::DateTime revocation_date, app::X509ExtensionCollection_1* extensions))
    IL2CPP_REGISTER_METHOD(0x03164D10, void, ctor_2, (app::X509Crl_X509CrlEntry * this_ptr, app::ASN1_1* entry))
    IL2CPP_REGISTER_METHOD(0x03164F90, app::Byte__Array*, get_SerialNumber, (app::X509Crl_X509CrlEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::DateTime, get_RevocationDate, (app::X509Crl_X509CrlEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::X509ExtensionCollection_1*, get_Extensions, (app::X509Crl_X509CrlEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031650D0, app::Byte__Array*, GetBytes, (app::X509Crl_X509CrlEntry * this_ptr))
} // namespace app::classes::Mono::Security::X509::X509Crl_X509CrlEntry
