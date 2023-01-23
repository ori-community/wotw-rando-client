#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RSAPKCS1SignatureDescription.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AsymmetricSignatureDeformatter.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/AsymmetricSignatureFormatter.h>

namespace app::classes::System::Security::Cryptography::RSAPKCS1SignatureDescription {
    IL2CPP_REGISTER_METHOD(0x028ED5C0, void, ctor, (app::RSAPKCS1SignatureDescription * this_ptr, app::String* hash_algorithm, app::String* digest_algorithm))
    IL2CPP_REGISTER_METHOD(0x028ED670, app::AsymmetricSignatureDeformatter*, CreateDeformatter, (app::RSAPKCS1SignatureDescription * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHOD(0x028ED790, app::AsymmetricSignatureFormatter*, CreateFormatter, (app::RSAPKCS1SignatureDescription * this_ptr, app::AsymmetricAlgorithm* key))
} // namespace app::classes::System::Security::Cryptography::RSAPKCS1SignatureDescription
