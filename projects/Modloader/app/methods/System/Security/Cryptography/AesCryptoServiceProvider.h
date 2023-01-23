#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AesCryptoServiceProvider.h>
#include <Modloader/app/structs/ICryptoTransform.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/PaddingMode__Enum.h>

namespace app::classes::System::Security::Cryptography::AesCryptoServiceProvider {
    IL2CPP_REGISTER_METHOD(0x02FC8400, void, ctor, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC84A0, void, GenerateIV, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025C4D30, void, GenerateKey, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC84C0, app::ICryptoTransform*, CreateDecryptor_1, (app::AesCryptoServiceProvider * this_ptr, app::Byte__Array* key, app::Byte__Array* iv))
    IL2CPP_REGISTER_METHODINFO(0x04769700, AesCryptoServiceProvider_CreateDecryptor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FC86A0, app::ICryptoTransform*, CreateEncryptor_1, (app::AesCryptoServiceProvider * this_ptr, app::Byte__Array* key, app::Byte__Array* iv))
    IL2CPP_REGISTER_METHODINFO(0x047975B0, AesCryptoServiceProvider_CreateEncryptor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FC8880, app::Byte__Array*, get_IV, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC8890, void, set_IV, (app::AesCryptoServiceProvider * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x02FC88A0, app::Byte__Array*, get_Key, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC88B0, void, set_Key, (app::AesCryptoServiceProvider * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_KeySize, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC88C0, void, set_KeySize, (app::AesCryptoServiceProvider * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_FeedbackSize, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E102C0, void, set_FeedbackSize, (app::AesCryptoServiceProvider * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FC830, app::CipherMode__Enum, get_Mode, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC88D0, void, set_Mode, (app::AesCryptoServiceProvider * this_ptr, app::CipherMode__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04700E40, AesCryptoServiceProvider_set_Mode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::PaddingMode__Enum, get_Padding, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10E40, void, set_Padding, (app::AesCryptoServiceProvider * this_ptr, app::PaddingMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x01E11290, app::ICryptoTransform*, CreateDecryptor_2, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E11230, app::ICryptoTransform*, CreateEncryptor_2, (app::AesCryptoServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E100D0, void, Dispose, (app::AesCryptoServiceProvider * this_ptr, bool disposing))
} // namespace app::classes::System::Security::Cryptography::AesCryptoServiceProvider
