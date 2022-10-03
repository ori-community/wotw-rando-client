#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::TlsCipherSuite {
    IL2CPP_REGISTER_METHOD(0x0291AB10, void, ctor, (app::TlsCipherSuite * this_ptr, int16_t code, app::String* name, app::CipherAlgorithmType__Enum cipher_algorithm_type, app::HashAlgorithmType__Enum hash_algorithm_type, app::ExchangeAlgorithmType__Enum exchange_algorithm_type, bool exportable, bool block_mode, uint8_t key_material_size, uint8_t expanded_key_material_size, int16_t effective_key_bytes, uint8_t iv_size, uint8_t block_size))
    IL2CPP_REGISTER_METHOD(0x0291AD30, app::Byte__Array*, ComputeServerRecordMAC, (app::TlsCipherSuite * this_ptr, app::ContentType__Enum content_type, app::Byte__Array* fragment))
    IL2CPP_REGISTER_METHOD(0x0291B0A0, app::Byte__Array*, ComputeClientRecordMAC, (app::TlsCipherSuite * this_ptr, app::ContentType__Enum content_type, app::Byte__Array* fragment))
    IL2CPP_REGISTER_METHOD(0x0291B410, void, ComputeMasterSecret, (app::TlsCipherSuite * this_ptr, app::Byte__Array* pre_master_secret))
    IL2CPP_REGISTER_METHOD(0x0291B510, void, ComputeKeys, (app::TlsCipherSuite * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::TlsCipherSuite
