#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_Dictionary_2_System_String_System_Object__ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::Dictionary_2_System_String_System_Object_*,
        get_Item,
        app::Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_* this_ptr,
        app::Object* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_* this_ptr,
        app::Object* key,
        app::Dictionary_2_System_String_System_Object_* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Object_Dictionary_2_System_String_System_Object_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_Dictionary_2_System_String_System_Object__
