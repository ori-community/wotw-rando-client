#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RSAEncryptionPadding.h>
#include <Modloader/app/structs/HashAlgorithmName.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RSAEncryptionPaddingMode__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::RSAEncryptionPadding {
    IL2CPP_REGISTER_METHOD(0x028EA3A0, app::RSAEncryptionPadding*, get_Pkcs1, ())
    IL2CPP_REGISTER_METHOD(0x028EA440, app::RSAEncryptionPadding*, get_OaepSHA1, ())
    IL2CPP_REGISTER_METHOD(0x028EA4E0, app::RSAEncryptionPadding*, get_OaepSHA256, ())
    IL2CPP_REGISTER_METHOD(0x028EA580, app::RSAEncryptionPadding*, get_OaepSHA384, ())
    IL2CPP_REGISTER_METHOD(0x028EA620, app::RSAEncryptionPadding*, get_OaepSHA512, ())
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor_1, (app::RSAEncryptionPadding * this_ptr, app::RSAEncryptionPaddingMode__Enum mode, app::HashAlgorithmName oaep_hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x028EA6C0, app::RSAEncryptionPadding*, CreateOaep, (app::HashAlgorithmName hash_algorithm))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::RSAEncryptionPaddingMode__Enum, get_Mode, (app::RSAEncryptionPadding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::HashAlgorithmName, get_OaepHashAlgorithm, (app::RSAEncryptionPadding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EA860, int32_t, GetHashCode, (app::RSAEncryptionPadding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022916C0, int32_t, CombineHashCodes, (int32_t h1, int32_t h2))
    IL2CPP_REGISTER_METHOD(0x028EA920, bool, Equals_1, (app::RSAEncryptionPadding * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x028EA9D0, bool, Equals_2, (app::RSAEncryptionPadding * this_ptr, app::RSAEncryptionPadding* other))
    IL2CPP_REGISTER_METHOD(0x028EAB60, bool, op_Equality, (app::RSAEncryptionPadding * left, app::RSAEncryptionPadding* right))
    IL2CPP_REGISTER_METHOD(0x028EAB80, bool, op_Inequality, (app::RSAEncryptionPadding * left, app::RSAEncryptionPadding* right))
    IL2CPP_REGISTER_METHOD(0x028EAC50, app::String*, ToString, (app::RSAEncryptionPadding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028EAD20, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x028EAF00, void, ctor_2, (app::RSAEncryptionPadding * this_ptr))
    inline bool operator==(app::RSAEncryptionPadding& left, app::RSAEncryptionPadding& right) {
        return op_Equality(&left, &right);
    }
    inline bool operator!=(app::RSAEncryptionPadding& left, app::RSAEncryptionPadding& right) {
        return op_Inequality(&left, &right);
    }
} // namespace app::classes::System::Security::Cryptography::RSAEncryptionPadding
