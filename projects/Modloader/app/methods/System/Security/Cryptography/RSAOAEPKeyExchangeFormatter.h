#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/RSAOAEPKeyExchangeFormatter.h>
#include <Modloader/app/structs/RandomNumberGenerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Security::Cryptography::RSAOAEPKeyExchangeFormatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::RSAOAEPKeyExchangeFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028EB6B0, void, ctor_2, app::RSAOAEPKeyExchangeFormatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x028EB7C0, app::Byte__Array*, get_Parameter, app::RSAOAEPKeyExchangeFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028EB910, void, set_Parameter, app::RSAOAEPKeyExchangeFormatter* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_Parameters, app::RSAOAEPKeyExchangeFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::RandomNumberGenerator*, get_Rng, app::RSAOAEPKeyExchangeFormatter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Rng, app::RSAOAEPKeyExchangeFormatter* this_ptr, app::RandomNumberGenerator* value)
    IL2CPP_REGISTER_METHOD(0x028EBA60, void, SetKey, app::RSAOAEPKeyExchangeFormatter* this_ptr, app::AsymmetricAlgorithm* key)
    IL2CPP_REGISTER_METHOD(0x028EBB70, app::Byte__Array*, CreateKeyExchange_1, app::RSAOAEPKeyExchangeFormatter* this_ptr, app::Byte__Array* rgb_data)
    IL2CPP_REGISTER_METHOD(
        0x01DC7CD0,
        app::Byte__Array*,
        CreateKeyExchange_2,
        app::RSAOAEPKeyExchangeFormatter* this_ptr,
        app::Byte__Array* rgb_data,
        app::Type* sym_alg_type
    )
    IL2CPP_REGISTER_METHOD(0x028EBE30, bool, get_OverridesEncrypt, app::RSAOAEPKeyExchangeFormatter* this_ptr)
} // namespace app::classes::System::Security::Cryptography::RSAOAEPKeyExchangeFormatter
