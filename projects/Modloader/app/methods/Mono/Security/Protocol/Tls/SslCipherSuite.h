#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SslCipherSuite.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CipherAlgorithmType__Enum.h>
#include <Modloader/app/structs/HashAlgorithmType__Enum.h>
#include <Modloader/app/structs/ExchangeAlgorithmType__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ContentType__Enum.h>

namespace app::classes::Mono::Security::Protocol::Tls::SslCipherSuite {
    IL2CPP_REGISTER_METHOD(0x01F7CDB0, void, ctor, (app::SslCipherSuite * this_ptr, int16_t code, app::String* name, app::CipherAlgorithmType__Enum cipher_algorithm_type, app::HashAlgorithmType__Enum hash_algorithm_type, app::ExchangeAlgorithmType__Enum exchange_algorithm_type, bool exportable, bool block_mode, uint8_t key_material_size, uint8_t expanded_key_material_size, int16_t effective_key_bytes, uint8_t iv_size, uint8_t block_size))
    IL2CPP_REGISTER_METHOD(0x01F7CFB0, app::Byte__Array*, ComputeServerRecordMAC, (app::SslCipherSuite * this_ptr, app::ContentType__Enum content_type, app::Byte__Array* fragment))
    IL2CPP_REGISTER_METHOD(0x01F7D3A0, app::Byte__Array*, ComputeClientRecordMAC, (app::SslCipherSuite * this_ptr, app::ContentType__Enum content_type, app::Byte__Array* fragment))
    IL2CPP_REGISTER_METHOD(0x01F7D7A0, void, ComputeMasterSecret, (app::SslCipherSuite * this_ptr, app::Byte__Array* pre_master_secret))
    IL2CPP_REGISTER_METHOD(0x01F7DA60, void, ComputeKeys, (app::SslCipherSuite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F7E0B0, app::Byte__Array*, prf, (app::SslCipherSuite * this_ptr, app::Byte__Array* secret, app::String* label, app::Byte__Array* random))
} // namespace app::classes::Mono::Security::Protocol::Tls::SslCipherSuite
