#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Globalization_CultureInfo_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Globalization_CultureInfo_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_System_Globalization_CultureInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_String_System_Globalization_CultureInfo_* this_ptr,
        app::String* key,
        app::CultureInfo* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_String_System_Globalization_CultureInfo_* this_ptr,
        app::String* key,
        app::CultureInfo** value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Globalization_CultureInfo_
