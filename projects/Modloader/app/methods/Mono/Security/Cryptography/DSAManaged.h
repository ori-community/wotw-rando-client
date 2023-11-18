#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DSAManaged.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DSAManaged_KeyGeneratedEventHandler.h>
#include <Modloader/app/structs/DSAParameters.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Cryptography::DSAManaged {
    IL2CPP_REGISTER_METHOD(0x025C92E0, void, ctor, (app::DSAManaged * this_ptr, int32_t dw_key_size))
    IL2CPP_REGISTER_METHOD(0x025C94A0, void, Finalize, (app::DSAManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025C9520, void, Generate, (app::DSAManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025C96B0, void, GenerateKeyPair, (app::DSAManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025C9810, void, add, (app::DSAManaged * this_ptr, app::Byte__Array* a, app::Byte__Array* b, int32_t value))
    IL2CPP_REGISTER_METHOD(0x025C98D0, void, GenerateParams, (app::DSAManaged * this_ptr, int32_t key_length))
    IL2CPP_REGISTER_METHOD(0x025CA2C0, app::RandomNumberGenerator*, get_Random, (app::DSAManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CA2F0, int32_t, get_KeySize, (app::DSAManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_KeyExchangeAlgorithm, (app::DSAManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CA320, bool, get_PublicOnly, (app::DSAManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CA3D0, app::String*, get_SignatureAlgorithm, (app::DSAManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025CA450, app::Byte__Array*, NormalizeArray, (app::DSAManaged * this_ptr, app::Byte__Array* array))
    IL2CPP_REGISTER_METHOD(0x025CA540, app::DSAParameters, ExportParameters, (app::DSAManaged * this_ptr, bool include_private_parameters))
    IL2CPP_REGISTER_METHOD(0x025CA880, void, ImportParameters, (app::DSAManaged * this_ptr, app::DSAParameters parameters))
    IL2CPP_REGISTER_METHOD(0x025CB1E0, app::Byte__Array*, CreateSignature, (app::DSAManaged * this_ptr, app::Byte__Array* rgb_hash))
    IL2CPP_REGISTER_METHOD(0x025CB6B0, bool, VerifySignature, (app::DSAManaged * this_ptr, app::Byte__Array* rgb_hash, app::Byte__Array* rgb_signature))
    IL2CPP_REGISTER_METHOD(0x025CBD90, void, Dispose, (app::DSAManaged * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x025CC070, void, add_KeyGenerated, (app::DSAManaged * this_ptr, app::DSAManaged_KeyGeneratedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x025CC160, void, remove_KeyGenerated, (app::DSAManaged * this_ptr, app::DSAManaged_KeyGeneratedEventHandler* value))
} // namespace app::classes::Mono::Security::Cryptography::DSAManaged
