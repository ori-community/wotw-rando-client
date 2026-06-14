#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_DateTime_System_TimeType_.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_DateTime_System_TimeType_.h>

namespace app::classes::System::Collections::Generic::List_1_KeyValuePair_2_System_DateTime_System_TimeType__ {
    IL2CPP_REGISTER_METHOD(
        0x025E8A60,
        app::KeyValuePair_2_System_DateTime_System_TimeType_,
        get_Item,
        app::List_1_KeyValuePair_2_System_DateTime_System_TimeType_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_KeyValuePair_2_System_DateTime_System_TimeType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_KeyValuePair_2_System_DateTime_System_TimeType_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x025E8DE0,
        void,
        Add,
        app::List_1_KeyValuePair_2_System_DateTime_System_TimeType_* this_ptr,
        app::KeyValuePair_2_System_DateTime_System_TimeType_ item
    )
} // namespace app::classes::System::Collections::Generic::List_1_KeyValuePair_2_System_DateTime_System_TimeType__
