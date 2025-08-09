#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_OverridableColorProperty_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_String_OverridableColorProperty_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableColorProperty_.h>
#include <Modloader/app/structs/OverridableColorProperty.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_OverridableColorProperty_ {
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_String_OverridableColorProperty_*,
        get_Values,
        app::Dictionary_2_System_String_OverridableColorProperty_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_OverridableColorProperty_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_String_OverridableColorProperty_,
        GetEnumerator,
        app::Dictionary_2_System_String_OverridableColorProperty_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_String_OverridableColorProperty_* this_ptr,
        app::String* key,
        app::OverridableColorProperty** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_String_OverridableColorProperty_* this_ptr,
        app::String* key,
        app::OverridableColorProperty* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_OverridableColorProperty_
