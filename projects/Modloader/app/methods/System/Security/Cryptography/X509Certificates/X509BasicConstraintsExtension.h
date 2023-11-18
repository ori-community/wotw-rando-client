#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/X509BasicConstraintsExtension.h>
#include <Modloader/app/structs/AsnDecodeStatus__Enum.h>
#include <Modloader/app/structs/AsnEncodedData.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension {
    IL2CPP_REGISTER_METHOD(0x021C3470, void, ctor_1, (app::X509BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C35D0, void, ctor_2, (app::X509BasicConstraintsExtension * this_ptr, app::AsnEncodedData* encoded_basic_constraints, bool critical))
    IL2CPP_REGISTER_METHOD(0x021C3760, void, ctor_3, (app::X509BasicConstraintsExtension * this_ptr, bool certificate_authority, bool has_path_length_constraint, int32_t path_length_constraint, bool critical))
    IL2CPP_REGISTER_METHOD(0x021C3940, bool, get_CertificateAuthority, (app::X509BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C3A00, bool, get_HasPathLengthConstraint, (app::X509BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C3AC0, int32_t, get_PathLengthConstraint, (app::X509BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C3B80, void, CopyFrom, (app::X509BasicConstraintsExtension * this_ptr, app::AsnEncodedData* asn_encoded_data))
    IL2CPP_REGISTER_METHOD(0x021C3E90, app::AsnDecodeStatus__Enum, Decode, (app::X509BasicConstraintsExtension * this_ptr, app::Byte__Array* extension))
    IL2CPP_REGISTER_METHOD(0x021C4110, app::Byte__Array*, Encode, (app::X509BasicConstraintsExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C44A0, app::String*, ToString, (app::X509BasicConstraintsExtension * this_ptr, bool multi_line))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension
