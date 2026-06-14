#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherAlgorithmType__Enum.h>
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/CipherSuite.h>
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/ExchangeAlgorithmType__Enum.h>
#include <Modloader/app/structs/HashAlgorithm.h>
#include <Modloader/app/structs/HashAlgorithmType__Enum.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/KeyedHashAlgorithm.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Protocol::Tls::CipherSuite {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::ICryptoTransform*, get_EncryptionCipher, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::ICryptoTransform*, get_DecryptionCipher, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::KeyedHashAlgorithm*, get_ClientHMAC, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::KeyedHashAlgorithm*, get_ServerHMAC, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::CipherAlgorithmType__Enum, get_CipherAlgorithmType, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F62CE0, app::String*, get_HashAlgorithmName, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F62D80, app::HashAlgorithm*, CreateHashAlgorithm, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529E80, app::HashAlgorithmType__Enum, get_HashAlgorithmType, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F62DA0, int32_t, get_HashSize, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, app::ExchangeAlgorithmType__Enum, get_ExchangeAlgorithmType, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654950, app::CipherMode__Enum, get_CipherMode, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B67060, int16_t, get_Code, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_IsExportable, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446970, uint8_t, get_KeyMaterialSize, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_KeyBlockSize, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5A00, uint8_t, get_ExpandedKeyMaterialSize, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F62DC0, int16_t, get_EffectiveKeyBits, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446590, uint8_t, get_IvSize, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Context_1*, get_Context, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Context, app::CipherSuite* this_ptr, app::Context_1* value)
    IL2CPP_REGISTER_METHOD(
        0x01F62DD0,
        void,
        ctor,
        app::CipherSuite* this_ptr,
        int16_t code,
        app::String* name,
        app::CipherAlgorithmType__Enum cipher_algorithm_type,
        app::HashAlgorithmType__Enum hash_algorithm_type,
        app::ExchangeAlgorithmType__Enum exchange_algorithm_type,
        bool exportable,
        bool block_mode,
        uint8_t key_material_size,
        uint8_t expanded_key_material_size,
        int16_t effective_key_bits,
        uint8_t iv_size,
        uint8_t block_size
    )
    IL2CPP_REGISTER_METHOD(0x01F62E80, void, Write_1, app::CipherSuite* this_ptr, app::Byte__Array* array, int32_t offset, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01F62F90, void, Write_2, app::CipherSuite* this_ptr, app::Byte__Array* array, int32_t offset, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01F631B0, void, InitializeCipher, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F631D0, app::Byte__Array*, EncryptRecord, app::CipherSuite* this_ptr, app::Byte__Array* fragment, app::Byte__Array* mac)
    IL2CPP_REGISTER_METHOD(
        0x01F633A0,
        void,
        DecryptRecord,
        app::CipherSuite* this_ptr,
        app::Byte__Array* fragment,
        app::Byte__Array** dcr_fragment,
        app::Byte__Array** dcr_m_a_c
    )
    IL2CPP_REGISTER_METHOD(0x01F635A0, app::Byte__Array*, CreatePremasterSecret, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F636E0,
        app::Byte__Array*,
        PRF,
        app::CipherSuite* this_ptr,
        app::Byte__Array* secret,
        app::String* label,
        app::Byte__Array* data,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(
        0x01F63AD0,
        app::Byte__Array*,
        Expand,
        app::CipherSuite* this_ptr,
        app::HashAlgorithm* hash,
        app::Byte__Array* secret,
        app::Byte__Array* seed,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(0x01F64220, void, createEncryptionCipher, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F648E0, void, createDecryptionCipher, app::CipherSuite* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F64FA0, void, cctor, )
} // namespace app::classes::Mono::Security::Protocol::Tls::CipherSuite
