#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ASN1.h>
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::ASN1Convert {
    IL2CPP_REGISTER_METHOD(0x025C2DB0, app::ASN1*, FromInt32_1, int32_t value)
    IL2CPP_REGISTER_METHOD(0x025C30B0, app::ASN1*, FromOid_1, app::String* oid)
    IL2CPP_REGISTER_METHOD(0x025C3240, int32_t, ToInt32_1, app::ASN1* asn1)
    IL2CPP_REGISTER_METHOD(0x025C33B0, app::String*, ToOid_1, app::ASN1* asn1)
    IL2CPP_REGISTER_METHOD(0x025C3710, app::DateTime, ToDateTime_1, app::ASN1* time)
    IL2CPP_REGISTER_METHOD(0x02A379E0, app::ASN1_1*, FromDateTime, app::DateTime dt)
    IL2CPP_REGISTER_METHOD(0x02A37D50, app::ASN1_1*, FromInt32_2, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02A38050, app::ASN1_1*, FromOid_2, app::String* oid)
    IL2CPP_REGISTER_METHOD(0x02A381E0, app::ASN1_1*, FromUnsignedBigInteger, app::Byte__Array* big)
    IL2CPP_REGISTER_METHOD(0x02A383C0, int32_t, ToInt32_2, app::ASN1_1* asn1)
    IL2CPP_REGISTER_METHOD(0x02A38530, app::String*, ToOid_2, app::ASN1_1* asn1)
    IL2CPP_REGISTER_METHOD(0x02A38890, app::DateTime, ToDateTime_2, app::ASN1_1* time)
} // namespace app::classes::Mono::Security::ASN1Convert
