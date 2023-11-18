#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AesManaged.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/PaddingMode__Enum.h>

namespace app::classes::System::Security::Cryptography::AesManaged {
    IL2CPP_REGISTER_METHOD(0x02FC8A30, void, ctor, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8C10, int32_t, get_FeedbackSize, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8C40, void, set_FeedbackSize, (app::AesManaged * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02FC8C70, app::Byte__Array*, get_IV, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8CA0, void, set_IV, (app::AesManaged * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x0210EA10, app::Byte__Array*, get_Key, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8CD0, void, set_Key, (app::AesManaged * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x02FC8D00, int32_t, get_KeySize, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8D30, void, set_KeySize, (app::AesManaged * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02FC8D60, app::CipherMode__Enum, get_Mode, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8D90, void, set_Mode, (app::AesManaged * this_ptr, app::CipherMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x02FC8E80, app::PaddingMode__Enum, get_Padding, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8EB0, void, set_Padding, (app::AesManaged * this_ptr, app::PaddingMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x02FC8EE0, app::ICryptoTransform*, CreateDecryptor_1, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8F10, app::ICryptoTransform*, CreateDecryptor_2, (app::AesManaged * this_ptr, app::Byte__Array* key, app::Byte__Array* iv))
    IL2CPP_REGISTER_METHOD(0x02FC90B0, app::ICryptoTransform*, CreateEncryptor_1, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC90E0, app::ICryptoTransform*, CreateEncryptor_2, (app::AesManaged * this_ptr, app::Byte__Array* key, app::Byte__Array* iv))
    IL2CPP_REGISTER_METHOD(0x02FC9280, void, Dispose, (app::AesManaged * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02030050, void, GenerateIV, (app::AesManaged * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC9400, void, GenerateKey, (app::AesManaged * this_ptr))
} // namespace app::classes::System::Security::Cryptography::AesManaged
