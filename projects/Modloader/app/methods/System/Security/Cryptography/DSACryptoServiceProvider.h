#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CspKeyContainerInfo.h>
#include <Modloader/app/structs/CspParameters.h>
#include <Modloader/app/structs/DSACryptoServiceProvider.h>
#include <Modloader/app/structs/DSAParameters.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::DSACryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x020D5A60, void, ctor_1, app::DSACryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D5A80, void, ctor_2, app::DSACryptoServiceProvider* this_ptr, app::CspParameters* parameters)
    IL2CPP_REGISTER_METHOD(0x020D5AD0, void, ctor_3, app::DSACryptoServiceProvider* this_ptr, int32_t dw_key_size)
    IL2CPP_REGISTER_METHOD(0x020D5AE0, void, ctor_4, app::DSACryptoServiceProvider* this_ptr, int32_t dw_key_size, app::CspParameters* parameters)
    IL2CPP_REGISTER_METHOD(0x020D5B30, void, Common_1, app::DSACryptoServiceProvider* this_ptr, int32_t dw_key_size, bool parameters)
    IL2CPP_REGISTER_METHOD(0x020D6160, void, Common_2, app::DSACryptoServiceProvider* this_ptr, app::CspParameters* parameters)
    IL2CPP_REGISTER_METHOD(0x020D6320, void, Finalize, app::DSACryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_KeyExchangeAlgorithm, app::DSACryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D63A0, int32_t, get_KeySize, app::DSACryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_PersistKeyInCsp, app::DSACryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_PersistKeyInCsp, app::DSACryptoServiceProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x020D63D0, bool, get_PublicOnly, app::DSACryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D63F0, app::String*, get_SignatureAlgorithm, app::DSACryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D6470, bool, get_UseMachineKeyStore, )
    IL2CPP_REGISTER_METHOD(0x020D64F0, void, set_UseMachineKeyStore, bool value)
    IL2CPP_REGISTER_METHOD(0x020D6580, app::DSAParameters, ExportParameters, app::DSACryptoServiceProvider* this_ptr, bool include_private_parameters)
    IL2CPP_REGISTER_METHOD(0x020D66B0, void, ImportParameters, app::DSACryptoServiceProvider* this_ptr, app::DSAParameters parameters)
    IL2CPP_REGISTER_METHOD(0x01D61480, app::Byte__Array*, CreateSignature, app::DSACryptoServiceProvider* this_ptr, app::Byte__Array* rgb_hash)
    IL2CPP_REGISTER_METHOD(0x020D6700, app::Byte__Array*, SignData_1, app::DSACryptoServiceProvider* this_ptr, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(
        0x020D6760,
        app::Byte__Array*,
        SignData_2,
        app::DSACryptoServiceProvider* this_ptr,
        app::Byte__Array* buffer,
        int32_t offset,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x020D67F0, app::Byte__Array*, SignData_3, app::DSACryptoServiceProvider* this_ptr, app::Stream* input_stream)
    IL2CPP_REGISTER_METHOD(0x020D6850, app::Byte__Array*, SignHash, app::DSACryptoServiceProvider* this_ptr, app::Byte__Array* rgb_hash, app::String* str)
    IL2CPP_REGISTER_METHOD(0x020D6990, bool, VerifyData, app::DSACryptoServiceProvider* this_ptr, app::Byte__Array* rgb_data, app::Byte__Array* rgb_signature)
    IL2CPP_REGISTER_METHOD(
        0x020D6A00,
        bool,
        VerifyHash,
        app::DSACryptoServiceProvider* this_ptr,
        app::Byte__Array* rgb_hash,
        app::String* str,
        app::Byte__Array* rgb_signature
    )
    IL2CPP_REGISTER_METHOD(
        0x020D6B50,
        bool,
        VerifySignature,
        app::DSACryptoServiceProvider* this_ptr,
        app::Byte__Array* rgb_hash,
        app::Byte__Array* rgb_signature
    )
    IL2CPP_REGISTER_METHOD(
        0x020D6B80,
        app::Byte__Array*,
        HashData_1,
        app::DSACryptoServiceProvider* this_ptr,
        app::Byte__Array* data,
        int32_t offset,
        int32_t count,
        app::HashAlgorithmName hash_algorithm
    )
    IL2CPP_REGISTER_METHOD(
        0x020D6D10,
        app::Byte__Array*,
        HashData_2,
        app::DSACryptoServiceProvider* this_ptr,
        app::Stream* data,
        app::HashAlgorithmName hash_algorithm
    )
    IL2CPP_REGISTER_METHOD(0x020D6E70, void, Dispose, app::DSACryptoServiceProvider* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x020D6ED0, void, OnKeyGenerated, app::DSACryptoServiceProvider* this_ptr, app::Object* sender, app::EventArgs* e)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CspKeyContainerInfo*, get_CspKeyContainerInfo, app::DSACryptoServiceProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D6F60, app::Byte__Array*, ExportCspBlob, app::DSACryptoServiceProvider* this_ptr, bool include_private_parameters)
    IL2CPP_REGISTER_METHOD(0x020D6F80, void, ImportCspBlob, app::DSACryptoServiceProvider* this_ptr, app::Byte__Array* key_blob)
} // namespace app::classes::System::Security::Cryptography::DSACryptoServiceProvider
