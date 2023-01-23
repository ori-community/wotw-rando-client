#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SymmetricAlgorithm.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/KeySizes__Array.h>
#include <Modloader/app/structs/CipherMode__Enum.h>
#include <Modloader/app/structs/PaddingMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ICryptoTransform.h>

namespace app::classes::System::Security::Cryptography::SymmetricAlgorithm {
    IL2CPP_REGISTER_METHOD(0x01E0FF80, void, ctor, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0FF90, void, Dispose_1, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10040, void, Clear, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E100D0, void, Dispose_2, (app::SymmetricAlgorithm * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_BlockSize, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10120, void, set_BlockSize, (app::SymmetricAlgorithm * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04737578, SymmetricAlgorithm_set_BlockSize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_FeedbackSize, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E102C0, void, set_FeedbackSize, (app::SymmetricAlgorithm * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0476EF58, SymmetricAlgorithm_set_FeedbackSize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E103A0, app::Byte__Array*, get_IV, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10500, void, set_IV, (app::SymmetricAlgorithm * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHODINFO(0x04712870, SymmetricAlgorithm_set_IV__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E106D0, app::Byte__Array*, get_Key, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10830, void, set_Key, (app::SymmetricAlgorithm * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHODINFO(0x0476C980, SymmetricAlgorithm_set_Key__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E10A10, app::KeySizes__Array*, get_LegalBlockSizes, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10B50, app::KeySizes__Array*, get_LegalKeySizes, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_KeySize, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10C90, void, set_KeySize, (app::SymmetricAlgorithm * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0472EF00, SymmetricAlgorithm_set_KeySize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::CipherMode__Enum, get_Mode, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10D70, void, set_Mode, (app::SymmetricAlgorithm * this_ptr, app::CipherMode__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0470E460, SymmetricAlgorithm_set_Mode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004E57A0, app::PaddingMode__Enum, get_Padding, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E10E40, void, set_Padding, (app::SymmetricAlgorithm * this_ptr, app::PaddingMode__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0479A198, SymmetricAlgorithm_set_Padding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E10F10, bool, ValidKeySize, (app::SymmetricAlgorithm * this_ptr, int32_t bit_length))
    IL2CPP_REGISTER_METHOD(0x01E11010, app::SymmetricAlgorithm*, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x01E11150, app::SymmetricAlgorithm*, Create_2, (app::String * alg_name))
    IL2CPP_REGISTER_METHOD(0x01E11230, app::ICryptoTransform*, CreateEncryptor, (app::SymmetricAlgorithm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E11290, app::ICryptoTransform*, CreateDecryptor, (app::SymmetricAlgorithm * this_ptr))
} // namespace app::classes::System::Security::Cryptography::SymmetricAlgorithm
