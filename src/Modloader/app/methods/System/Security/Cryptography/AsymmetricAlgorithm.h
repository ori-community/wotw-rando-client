#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsymmetricAlgorithm.h>
#include <Modloader/app/structs/KeySizes__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::AsymmetricAlgorithm {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AsymmetricAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C87A0, void, Dispose_1, app::AsymmetricAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C87B0, void, Clear, app::AsymmetricAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, app::AsymmetricAlgorithm* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_KeySize, app::AsymmetricAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C8860, void, set_KeySize, app::AsymmetricAlgorithm* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x020C89E0, app::KeySizes__Array*, get_LegalKeySizes, app::AsymmetricAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C8B20, app::String*, get_SignatureAlgorithm, app::AsymmetricAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C8B70, app::String*, get_KeyExchangeAlgorithm, app::AsymmetricAlgorithm* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C8BC0, app::AsymmetricAlgorithm*, Create_1, )
    IL2CPP_REGISTER_METHOD(0x020C8D10, app::AsymmetricAlgorithm*, Create_2, app::String* alg_name)
    IL2CPP_REGISTER_METHOD(0x020C8DF0, void, FromXmlString, app::AsymmetricAlgorithm* this_ptr, app::String* xml_string)
    IL2CPP_REGISTER_METHOD(0x020C8E40, app::String*, ToXmlString, app::AsymmetricAlgorithm* this_ptr, bool include_private_parameters)
} // namespace app::classes::System::Security::Cryptography::AsymmetricAlgorithm
