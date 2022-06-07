#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Extensions::DictionaryExtension {
    IL2CPP_REGISTER_METHOD(0x0153F870, app::String *, ToReadableString, (app::Dictionary_2_System_Object_System_Object_ * data))
    IL2CPP_REGISTER_METHOD(0x01B31B60, bool, IsTheSameAs, (app::Dictionary_2_System_Object_System_Object_ * left, app::Dictionary_2_System_Object_System_Object_ * right))
}
