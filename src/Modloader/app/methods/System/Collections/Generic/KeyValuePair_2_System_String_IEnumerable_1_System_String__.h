#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_IEnumerable_1_System_String___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_String_IEnumerable_1_System_String__ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_Key, app::KeyValuePair_2_System_String_IEnumerable_1_System_String___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00107C10,
        app::IEnumerable_1_System_String_*,
        get_Value,
        app::KeyValuePair_2_System_String_IEnumerable_1_System_String___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00110270,
        void,
        ctor,
        app::KeyValuePair_2_System_String_IEnumerable_1_System_String___Boxed* this_ptr,
        app::String* key,
        app::IEnumerable_1_System_String_* value
    )
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_String_IEnumerable_1_System_String__
