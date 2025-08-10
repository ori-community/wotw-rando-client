#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CryptoStream.h>
#include <Modloader/app/structs/CspParameters.h>
#include <Modloader/app/structs/PasswordDeriveBytes.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::PasswordDeriveBytes {
    IL2CPP_REGISTER_METHOD(0x020DFA80, void, ctor_1, app::PasswordDeriveBytes* this_ptr, app::String* str_password, app::Byte__Array* rgb_salt)
    IL2CPP_REGISTER_METHOD(0x020DFC70, void, ctor_2, app::PasswordDeriveBytes* this_ptr, app::Byte__Array* password, app::Byte__Array* salt)
    IL2CPP_REGISTER_METHOD(
        0x020DFE60,
        void,
        ctor_3,
        app::PasswordDeriveBytes* this_ptr,
        app::String* str_password,
        app::Byte__Array* rgb_salt,
        app::String* str_hash_name,
        int32_t iterations
    )
    IL2CPP_REGISTER_METHOD(
        0x020E0010,
        void,
        ctor_4,
        app::PasswordDeriveBytes* this_ptr,
        app::Byte__Array* password,
        app::Byte__Array* salt,
        app::String* hash_name,
        int32_t iterations
    )
    IL2CPP_REGISTER_METHOD(
        0x020E01C0,
        void,
        ctor_5,
        app::PasswordDeriveBytes* this_ptr,
        app::String* str_password,
        app::Byte__Array* rgb_salt,
        app::CspParameters* csp_params
    )
    IL2CPP_REGISTER_METHOD(
        0x020E0290,
        void,
        ctor_6,
        app::PasswordDeriveBytes* this_ptr,
        app::Byte__Array* password,
        app::Byte__Array* salt,
        app::CspParameters* csp_params
    )
    IL2CPP_REGISTER_METHOD(
        0x020E0360,
        void,
        ctor_7,
        app::PasswordDeriveBytes* this_ptr,
        app::String* str_password,
        app::Byte__Array* rgb_salt,
        app::String* str_hash_name,
        int32_t iterations,
        app::CspParameters* csp_params
    )
    IL2CPP_REGISTER_METHOD(
        0x020E0500,
        void,
        ctor_8,
        app::PasswordDeriveBytes* this_ptr,
        app::Byte__Array* password,
        app::Byte__Array* salt,
        app::String* hash_name,
        int32_t iterations,
        app::CspParameters* csp_params
    )
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_HashName, app::PasswordDeriveBytes* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E07D0, void, set_HashName, app::PasswordDeriveBytes* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_IterationCount, app::PasswordDeriveBytes* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E0940, void, set_IterationCount, app::PasswordDeriveBytes* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x020E0AA0, app::Byte__Array*, get_Salt, app::PasswordDeriveBytes* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E0BF0, void, set_Salt, app::PasswordDeriveBytes* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x020E0DC0, app::Byte__Array*, GetBytes, app::PasswordDeriveBytes* this_ptr, int32_t cb)
    IL2CPP_REGISTER_METHOD(0x020E0F60, void, Reset, app::PasswordDeriveBytes* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E0F70, void, Dispose, app::PasswordDeriveBytes* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(
        0x020E10A0,
        app::Byte__Array*,
        CryptDeriveKey,
        app::PasswordDeriveBytes* this_ptr,
        app::String* algname,
        app::String* alghashname,
        int32_t key_size,
        app::Byte__Array* rgb_i_v
    )
    IL2CPP_REGISTER_METHOD(0x020E1190, app::Byte__Array*, ComputeBaseValue, app::PasswordDeriveBytes* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E13B0, app::Byte__Array*, ComputeBytes, app::PasswordDeriveBytes* this_ptr, int32_t cb)
    IL2CPP_REGISTER_METHOD(0x020E19A0, void, HashPrefix, app::PasswordDeriveBytes* this_ptr, app::CryptoStream* cs)
} // namespace app::classes::System::Security::Cryptography::PasswordDeriveBytes
