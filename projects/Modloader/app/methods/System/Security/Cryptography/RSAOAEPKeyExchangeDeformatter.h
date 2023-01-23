#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RSAOAEPKeyExchangeDeformatter.h>
#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::RSAOAEPKeyExchangeDeformatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EAF30, void, ctor_2, (app::RSAOAEPKeyExchangeDeformatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHODINFO(0x04791558, RSAOAEPKeyExchangeDeformatter__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String*, get_Parameters, (app::RSAOAEPKeyExchangeDeformatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Parameters, (app::RSAOAEPKeyExchangeDeformatter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x028EB040, app::Byte__Array*, DecryptKeyExchange, (app::RSAOAEPKeyExchangeDeformatter * this_ptr, app::Byte__Array* rgb_data))
    IL2CPP_REGISTER_METHODINFO(0x04763208, RSAOAEPKeyExchangeDeformatter_DecryptKeyExchange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028EB330, void, SetKey, (app::RSAOAEPKeyExchangeDeformatter * this_ptr, app::AsymmetricAlgorithm* key))
    IL2CPP_REGISTER_METHODINFO(0x04700D48, RSAOAEPKeyExchangeDeformatter_SetKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028EB440, bool, get_OverridesDecrypt, (app::RSAOAEPKeyExchangeDeformatter * this_ptr))
} // namespace app::classes::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter
