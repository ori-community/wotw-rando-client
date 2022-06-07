#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::X509::X509Builder {
    IL2CPP_REGISTER_METHOD(0x029392D0, void, ctor, (app::X509Builder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02939360, app::String *, GetOid, (app::X509Builder * this_ptr, app::String * hash_name))
    IL2CPP_REGISTER_METHODINFO(0x04790CE0, X509Builder_GetOid__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Hash, (app::X509Builder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029396C0, void, set_Hash, (app::X509Builder * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x02939760, app::Byte__Array *, Sign_1, (app::X509Builder * this_ptr, app::AsymmetricAlgorithm * aa))
    IL2CPP_REGISTER_METHODINFO(0x0470D6F0, X509Builder_Sign__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02939950, app::Byte__Array *, Build, (app::X509Builder * this_ptr, app::ASN1_1 * tbs, app::String * hashoid, app::Byte__Array * signature))
    IL2CPP_REGISTER_METHOD(0x02939C00, app::Byte__Array *, Sign_2, (app::X509Builder * this_ptr, app::RSA * key))
    IL2CPP_REGISTER_METHOD(0x02939E30, app::Byte__Array *, Sign_3, (app::X509Builder * this_ptr, app::DSA * key))
    IL2CPP_REGISTER_METHODINFO(0x04717278, X509Builder_Sign_2__MethodInfo)
}
