#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PrivateKey.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/RSA.h>

namespace app::classes::Mono::Security::Authenticode::PrivateKey {
    IL2CPP_REGISTER_METHOD(0x02A38DB0, void, ctor, (app::PrivateKey * this_ptr, app::Byte__Array* data, app::String* password))
    IL2CPP_REGISTER_METHODINFO(0x04759BF0, PrivateKey__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::RSA*, get_RSA, (app::PrivateKey * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A38EC0, app::Byte__Array*, DeriveKey, (app::PrivateKey * this_ptr, app::Byte__Array* salt, app::String* password))
    IL2CPP_REGISTER_METHOD(0x02A39050, bool, Decode, (app::PrivateKey * this_ptr, app::Byte__Array* pvk, app::String* password))
    IL2CPP_REGISTER_METHOD(0x02A39460, app::PrivateKey*, CreateFromFile_1, (app::String * filename))
    IL2CPP_REGISTER_METHOD(0x02A39470, app::PrivateKey*, CreateFromFile_2, (app::String * filename, app::String* password))
    IL2CPP_REGISTER_METHODINFO(0x04779770, PrivateKey_CreateFromFile_1__MethodInfo)
} // namespace app::classes::Mono::Security::Authenticode::PrivateKey
