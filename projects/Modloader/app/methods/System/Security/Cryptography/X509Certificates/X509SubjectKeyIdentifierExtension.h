#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension {
    IL2CPP_REGISTER_METHOD(0x0257E3B0, void, ctor_1, (app::X509SubjectKeyIdentifierExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257E510, void, ctor_2, (app::X509SubjectKeyIdentifierExtension * this_ptr, app::AsnEncodedData* encoded_subject_key_identifier, bool critical))
    IL2CPP_REGISTER_METHOD(0x0257E6A0, void, ctor_3, (app::X509SubjectKeyIdentifierExtension * this_ptr, app::Byte__Array* subject_key_identifier, bool critical))
    IL2CPP_REGISTER_METHODINFO(0x04776D08, X509SubjectKeyIdentifierExtension__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0257E960, void, ctor_4, (app::X509SubjectKeyIdentifierExtension * this_ptr, app::String* subject_key_identifier, bool critical))
    IL2CPP_REGISTER_METHODINFO(0x04713308, X509SubjectKeyIdentifierExtension__ctor_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0257EB70, void, ctor_5, (app::X509SubjectKeyIdentifierExtension * this_ptr, app::PublicKey* key, bool critical))
    IL2CPP_REGISTER_METHOD(0x0257EB90, void, ctor_6, (app::X509SubjectKeyIdentifierExtension * this_ptr, app::PublicKey* key, app::X509SubjectKeyIdentifierHashAlgorithm__Enum algorithm, bool critical))
    IL2CPP_REGISTER_METHODINFO(0x04734720, X509SubjectKeyIdentifierExtension__ctor_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0257F380, app::String*, get_SubjectKeyIdentifier, (app::X509SubjectKeyIdentifierExtension * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707010, X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0257F450, void, CopyFrom, (app::X509SubjectKeyIdentifierExtension * this_ptr, app::AsnEncodedData* asn_encoded_data))
    IL2CPP_REGISTER_METHODINFO(0x047161C8, X509SubjectKeyIdentifierExtension_CopyFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0257F760, uint8_t, FromHexChar, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x0257F790, uint8_t, FromHexChars, (uint16_t c1, uint16_t c2))
    IL2CPP_REGISTER_METHOD(0x0257F810, app::Byte__Array*, FromHex, (app::String * hex))
    IL2CPP_REGISTER_METHOD(0x0257F9B0, app::AsnDecodeStatus__Enum, Decode, (app::X509SubjectKeyIdentifierExtension * this_ptr, app::Byte__Array* extension))
    IL2CPP_REGISTER_METHOD(0x0257FBF0, app::Byte__Array*, Encode, (app::X509SubjectKeyIdentifierExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257FD50, app::String*, ToString, (app::X509SubjectKeyIdentifierExtension * this_ptr, bool multi_line))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension
