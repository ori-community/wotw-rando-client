#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryExtension_c_0_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Extensions::DictionaryExtension___c__0_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019DE4F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::DictionaryExtension_c_0_2_System_Object_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0271E6F0,
        app::String*,
        _ToReadableString_b__0_0,
        app::DictionaryExtension_c_0_2_System_Object_System_Object_* this_ptr,
        app::String* current,
        app::KeyValuePair_2_System_Object_System_Object_ kvp
    )
} // namespace app::classes::Moon::Extensions::DictionaryExtension___c__0_2_System_Object_System_Object_
