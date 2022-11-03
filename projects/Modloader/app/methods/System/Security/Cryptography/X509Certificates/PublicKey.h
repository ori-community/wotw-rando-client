#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::PublicKey {
    IL2CPP_REGISTER_METHOD(0x021C10B0, void, ctor, (app::PublicKey * this_ptr, app::X509Certificate_2* certificate))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::AsnEncodedData*, get_EncodedKeyValue, (app::PublicKey * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::AsnEncodedData*, get_EncodedParameters, (app::PublicKey * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C1850, app::AsymmetricAlgorithm*, get_Key, (app::PublicKey * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777168, PublicKey_get_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Oid*, get_Oid, (app::PublicKey * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C1AA0, app::Byte__Array*, GetUnsignedBigInteger, (app::Byte__Array * integer))
    IL2CPP_REGISTER_METHOD(0x021C1B90, app::DSA*, DecodeDSA, (app::Byte__Array * raw_public_key, app::Byte__Array* raw_parameters))
    IL2CPP_REGISTER_METHODINFO(0x0477CFC8, PublicKey_DecodeDSA__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C21E0, app::RSA*, DecodeRSA, (app::Byte__Array * raw_public_key))
    IL2CPP_REGISTER_METHODINFO(0x04713D58, PublicKey_DecodeRSA__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021C2650, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::X509Certificates::PublicKey
