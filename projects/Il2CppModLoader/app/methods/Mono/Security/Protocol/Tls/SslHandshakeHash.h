#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::SslHandshakeHash {
    IL2CPP_REGISTER_METHOD(0x01F81810, void, ctor, (app::SslHandshakeHash * this_ptr, app::Byte__Array * secret))
    IL2CPP_REGISTER_METHOD(0x01F818B0, void, Initialize, (app::SslHandshakeHash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F81910, app::Byte__Array *, HashFinal, (app::SslHandshakeHash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F81D40, void, HashCore, (app::SslHandshakeHash * this_ptr, app::Byte__Array * array, int32_t ib_start, int32_t cb_size))
    IL2CPP_REGISTER_METHOD(0x01F81DE0, app::Byte__Array *, CreateSignature, (app::SslHandshakeHash * this_ptr, app::RSA * rsa))
    IL2CPP_REGISTER_METHODINFO(0x04751FB0, SslHandshakeHash_CreateSignature__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F81FC0, bool, VerifySignature, (app::SslHandshakeHash * this_ptr, app::RSA * rsa, app::Byte__Array * rgb_signature))
    IL2CPP_REGISTER_METHODINFO(0x04737B60, SslHandshakeHash_VerifySignature__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F821E0, void, initializePad, (app::SslHandshakeHash * this_ptr))
}
