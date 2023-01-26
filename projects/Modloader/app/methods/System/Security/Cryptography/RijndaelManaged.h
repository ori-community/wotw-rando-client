#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RijndaelManaged.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/RijndaelManagedTransformMode__Enum.h>

namespace app::classes::System::Security::Cryptography::RijndaelManaged {
    IL2CPP_REGISTER_METHOD(0x028F00D0, void, ctor, (app::RijndaelManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F0230, app::ICryptoTransform*, CreateEncryptor, (app::RijndaelManaged * this_ptr, app::Byte__Array* rgb_key, app::Byte__Array* rgb_i_v))
    IL2CPP_REGISTER_METHOD(0x028F0260, app::ICryptoTransform*, CreateDecryptor, (app::RijndaelManaged * this_ptr, app::Byte__Array* rgb_key, app::Byte__Array* rgb_i_v))
    IL2CPP_REGISTER_METHOD(0x028F0290, void, GenerateKey, (app::RijndaelManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F0350, void, GenerateIV, (app::RijndaelManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028F0410, app::ICryptoTransform*, NewEncryptor, (app::RijndaelManaged * this_ptr, app::Byte__Array* rgb_key, app::CipherMode__Enum mode, app::Byte__Array* rgb_i_v, int32_t feedback_size, app::RijndaelManagedTransformMode__Enum encrypt_mode))
} // namespace app::classes::System::Security::Cryptography::RijndaelManaged
