#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/RSAPKCS1KeyExchangeDeformatter.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::RSAPKCS1KeyExchangeDeformatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028EC0A0, void, ctor_2, app::RSAPKCS1KeyExchangeDeformatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::RandomNumberGenerator*, get_RNG, app::RSAPKCS1KeyExchangeDeformatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_RNG, app::RSAPKCS1KeyExchangeDeformatter* this_ptr, app::RandomNumberGenerator* value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_Parameters, app::RSAPKCS1KeyExchangeDeformatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Parameters, app::RSAPKCS1KeyExchangeDeformatter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x028EC1B0, app::Byte__Array*, DecryptKeyExchange, app::RSAPKCS1KeyExchangeDeformatter* this_ptr, app::Byte__Array* rgb_in)
    IL2CPP_REGISTER_METHOD(0x028EC3F0, void, SetKey, app::RSAPKCS1KeyExchangeDeformatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x028EC500, bool, get_OverridesDecrypt, app::RSAPKCS1KeyExchangeDeformatter* this_ptr)
} // namespace app::classes::System::Security::Cryptography::RSAPKCS1KeyExchangeDeformatter
