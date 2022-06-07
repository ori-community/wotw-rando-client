#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::HMAC {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_BlockSizeValue, (app::HMAC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_BlockSizeValue, (app::HMAC * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x020D8AC0, void, UpdateIOPadBuffers, (app::HMAC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D8CE0, void, InitializeKey, (app::HMAC * this_ptr, app::Byte__Array * key))
    IL2CPP_REGISTER_METHOD(0x020D8E70, app::Byte__Array *, get_Key, (app::HMAC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D8FB0, void, set_Key, (app::HMAC * this_ptr, app::Byte__Array * value))
    IL2CPP_REGISTER_METHODINFO(0x04707C80, HMAC_set_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String *, get_HashName, (app::HMAC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D9080, void, set_HashName, (app::HMAC * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04765B30, HMAC_set_HashName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D9170, app::HMAC *, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x020D92B0, app::HMAC *, Create_2, (app::String * algorithm_name))
    IL2CPP_REGISTER_METHOD(0x020D9390, void, Initialize, (app::HMAC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D93F0, void, HashCore, (app::HMAC * this_ptr, app::Byte__Array * rgb, int32_t ib, int32_t cb))
    IL2CPP_REGISTER_METHOD(0x020D94A0, app::Byte__Array *, HashFinal, (app::HMAC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D96A0, void, Dispose, (app::HMAC * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x020D97D0, app::HashAlgorithm *, GetHashAlgorithmWithFipsFallback, (app::Func_1_System_Security_Cryptography_HashAlgorithm_ * create_standard_hash_algorithm_callback, app::Func_1_System_Security_Cryptography_HashAlgorithm_ * create_fips_hash_algorithm_callback))
    IL2CPP_REGISTER_METHODINFO(0x04771628, HMAC_GetHashAlgorithmWithFipsFallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020D9870, void, ctor, (app::HMAC * this_ptr))
}
