#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_System_Object_.h>

namespace app::classes::Moon::Extensions::DictionaryExtension {
    IL2CPP_REGISTER_METHOD(0x0153F870, app::String*, ToReadableString, (app::Dictionary_2_System_Object_System_Object_ * data))
    IL2CPP_REGISTER_METHOD(0x01B31B60, bool, IsTheSameAs, (app::Dictionary_2_System_Object_System_Object_ * left, app::Dictionary_2_System_Object_System_Object_* right))
} // namespace app::classes::Moon::Extensions::DictionaryExtension
