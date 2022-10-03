#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::HashAlgorithmName {
    IL2CPP_REGISTER_METHOD(0x020DBC10, app::HashAlgorithmName, get_MD5, ())
    IL2CPP_REGISTER_METHOD(0x020DBC90, app::HashAlgorithmName, get_SHA1, ())
    IL2CPP_REGISTER_METHOD(0x020DBD10, app::HashAlgorithmName, get_SHA256, ())
    IL2CPP_REGISTER_METHOD(0x020DBD90, app::HashAlgorithmName, get_SHA384, ())
    IL2CPP_REGISTER_METHOD(0x020DBE10, app::HashAlgorithmName, get_SHA512, ())
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::HashAlgorithmName__Boxed * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_Name, (app::HashAlgorithmName__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC210, app::String*, ToString, (app::HashAlgorithmName__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC2A0, bool, Equals_1, (app::HashAlgorithmName__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001DC3A0, bool, Equals_2, (app::HashAlgorithmName__Boxed * this_ptr, app::HashAlgorithmName other))
    IL2CPP_REGISTER_METHOD(0x001DC3D0, int32_t, GetHashCode, (app::HashAlgorithmName__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E27CD0, bool, op_Equality, (app::HashAlgorithmName left, app::HashAlgorithmName right))
    IL2CPP_REGISTER_METHOD(0x01E280E0, bool, op_Inequality, (app::HashAlgorithmName left, app::HashAlgorithmName right))
    inline bool operator==(app::HashAlgorithmName left, app::HashAlgorithmName right) {
        return op_Equality(left, right);
    }
    inline bool operator!=(app::HashAlgorithmName left, app::HashAlgorithmName right) {
        return op_Inequality(left, right);
    }
} // namespace app::classes::System::Security::Cryptography::HashAlgorithmName
