#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::RSAPKCS1SignatureDescription {
    IL2CPP_REGISTER_METHOD(0x028ED5C0, void, ctor, (app::RSAPKCS1SignatureDescription * this_ptr, app::String * hash_algorithm, app::String * digest_algorithm))
    IL2CPP_REGISTER_METHOD(0x028ED670, app::AsymmetricSignatureDeformatter *, CreateDeformatter, (app::RSAPKCS1SignatureDescription * this_ptr, app::AsymmetricAlgorithm * key))
    IL2CPP_REGISTER_METHOD(0x028ED790, app::AsymmetricSignatureFormatter *, CreateFormatter, (app::RSAPKCS1SignatureDescription * this_ptr, app::AsymmetricAlgorithm * key))
}
