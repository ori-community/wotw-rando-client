#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, app::Dictionary_2_System_String_System_Single_* this_ptr, app::String* key, float value)
    IL2CPP_REGISTER_METHOD(0x02E78EF0, float, get_Item, app::Dictionary_2_System_String_System_Single_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_String_System_Single_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x02BBBD70, void, Add, app::Dictionary_2_System_String_System_Single_* this_ptr, app::String* key, float value)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single_*,
        get_Keys,
        app::Dictionary_2_System_String_System_Single_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Single_
