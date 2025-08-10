#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RSASignaturePadding.h>
#include <Modloader/app/structs/RSASignaturePaddingMode__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::RSASignaturePadding {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_1, app::RSASignaturePadding* this_ptr, app::RSASignaturePaddingMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x028EDC00, app::RSASignaturePadding*, get_Pkcs1, )
    IL2CPP_REGISTER_METHOD(0x028EDCA0, app::RSASignaturePadding*, get_Pss, )
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::RSASignaturePaddingMode__Enum, get_Mode, app::RSASignaturePadding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, GetHashCode, app::RSASignaturePadding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028EDD40, bool, Equals_1, app::RSASignaturePadding* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x028EDDF0, bool, Equals_2, app::RSASignaturePadding* this_ptr, app::RSASignaturePadding* other)
    IL2CPP_REGISTER_METHOD(0x028EDEC0, bool, op_Equality, app::RSASignaturePadding* left, app::RSASignaturePadding* right)
    IL2CPP_REGISTER_METHOD(0x028EDEE0, bool, op_Inequality, app::RSASignaturePadding* left, app::RSASignaturePadding* right)
    IL2CPP_REGISTER_METHOD(0x028EDFB0, app::String*, ToString, app::RSASignaturePadding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028EE060, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x028EE280, void, ctor_2, app::RSASignaturePadding* this_ptr)
    inline bool operator==(app::RSASignaturePadding& left, app::RSASignaturePadding& right) { return op_Equality(&left, &right); }
    inline bool operator!=(app::RSASignaturePadding& left, app::RSASignaturePadding& right) { return op_Inequality(&left, &right); }
} // namespace app::classes::System::Security::Cryptography::RSASignaturePadding
