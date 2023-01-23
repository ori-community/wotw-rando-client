#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SecureStringHasher.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SecureStringHasher_HashCodeOfStringDelegate.h>

namespace app::classes::System::Xml::SecureStringHasher {
    IL2CPP_REGISTER_METHOD(0x01C8A800, void, ctor, (app::SecureStringHasher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C8A850, bool, Equals, (app::SecureStringHasher * this_ptr, app::String* x, app::String* y))
    IL2CPP_REGISTER_METHOD(0x01C8A910, int32_t, GetHashCode, (app::SecureStringHasher * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x01C8AA00, int32_t, GetHashCodeOfString, (app::String * key, int32_t s_len, int64_t additional_entropy))
    IL2CPP_REGISTER_METHODINFO(0x0477DAA0, SecureStringHasher_GetHashCodeOfString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C8AB30, app::SecureStringHasher_HashCodeOfStringDelegate*, GetHashCodeDelegate, ())
} // namespace app::classes::System::Xml::SecureStringHasher
