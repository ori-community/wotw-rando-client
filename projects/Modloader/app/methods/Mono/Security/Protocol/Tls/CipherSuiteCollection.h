#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CipherSuite.h>
#include <Modloader/app/structs/CipherAlgorithmType__Enum.h>
#include <Modloader/app/structs/CipherSuiteCollection.h>
#include <Modloader/app/structs/ExchangeAlgorithmType__Enum.h>
#include <Modloader/app/structs/HashAlgorithmType__Enum.h>
#include <Modloader/app/structs/IList_1_System_String_.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Protocol::Tls::CipherSuiteCollection {
    IL2CPP_REGISTER_METHOD(0x01F65030, app::CipherSuite*, get_Item_1, (app::CipherSuiteCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01F650F0, app::CipherSuite*, get_Item_2, (app::CipherSuiteCollection * this_ptr, int16_t code))
    IL2CPP_REGISTER_METHOD(0x01F651B0, void, ctor, (app::CipherSuiteCollection * this_ptr, app::SecurityProtocolType__Enum_1 protocol))
    IL2CPP_REGISTER_METHOD(0x01F652B0, int32_t, IndexOf_1, (app::CipherSuiteCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01F65480, int32_t, IndexOf_2, (app::CipherSuiteCollection * this_ptr, int16_t code))
    IL2CPP_REGISTER_METHOD(0x01F65630, void, Add, (app::CipherSuiteCollection * this_ptr, int16_t code, app::String* name, app::CipherAlgorithmType__Enum cipher_type, app::HashAlgorithmType__Enum hash_type, app::ExchangeAlgorithmType__Enum exchange_type, bool exportable, bool block_mode, uint8_t key_material_size, uint8_t expanded_key_material_size, int16_t effective_key_bytes, uint8_t iv_size, uint8_t block_size))
    IL2CPP_REGISTER_METHOD(0x01F65990, app::IList_1_System_String_*, GetNames, (app::CipherSuiteCollection * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::CipherSuiteCollection
