#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::RSAPKCS1KeyExchangeFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EC770, void, ctor_2, (app::RSAPKCS1KeyExchangeFormatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHODINFO(0x04710898, RSAPKCS1KeyExchangeFormatter__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028EC880, app::String*, get_Parameters, (app::RSAPKCS1KeyExchangeFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::RandomNumberGenerator*, get_Rng, (app::RSAPKCS1KeyExchangeFormatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Rng, (app::RSAPKCS1KeyExchangeFormatter * this_ptr, app::RandomNumberGenerator* value))
    IL2CPP_REGISTER_METHOD(0x028EC900, void, SetKey, (app::RSAPKCS1KeyExchangeFormatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHODINFO(0x04750568, RSAPKCS1KeyExchangeFormatter_SetKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028ECA10, app::Byte__Array*, CreateKeyExchange_1, (app::RSAPKCS1KeyExchangeFormatter * this_ptr, app::Byte__Array* rgb_data))
    IL2CPP_REGISTER_METHODINFO(0x047483E8, RSAPKCS1KeyExchangeFormatter_CreateKeyExchange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DC7CD0, app::Byte__Array*, CreateKeyExchange_2, (app::RSAPKCS1KeyExchangeFormatter * this_ptr, app::Byte__Array* rgb_data, app::Type* sym_alg_type))
    IL2CPP_REGISTER_METHOD(0x028ECD60, bool, get_OverridesEncrypt, (app::RSAPKCS1KeyExchangeFormatter * this_ptr))
} // namespace app::classes::System::Security::Cryptography::RSAPKCS1KeyExchangeFormatter
