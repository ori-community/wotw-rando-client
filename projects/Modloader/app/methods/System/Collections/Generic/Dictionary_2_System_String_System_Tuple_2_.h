#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Tuple_2_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Tuple_2_Guid_String_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Tuple_2_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_String_System_Tuple_2_* this_ptr,
        app::String* key,
        app::Tuple_2_Guid_String_** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_System_Tuple_2_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_System_String_System_Tuple_2_* this_ptr, app::String* key, app::Tuple_2_Guid_String_* value)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Tuple_2_
