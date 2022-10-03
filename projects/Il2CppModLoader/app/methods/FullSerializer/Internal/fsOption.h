#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::fsOption {
    IL2CPP_REGISTER_METHOD(0x018EA340, app::fsOption_1_System_Object_, Just_1, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x018EA310, app::fsOption_1_fsVersionedType_, Just_2, (app::fsVersionedType value))
    IL2CPP_REGISTER_METHODINFO(0x04771998, fsOption_Just_1__MethodInfo)
} // namespace app::classes::FullSerializer::Internal::fsOption
