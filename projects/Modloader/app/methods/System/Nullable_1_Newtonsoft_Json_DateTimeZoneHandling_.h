#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTimeZoneHandling__Enum.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Boxed.h>

namespace app::classes::System::Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0010E170,
        app::DateTimeZoneHandling__Enum,
        GetValueOrDefault,
        app::Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0010DB80,
        void,
        ctor,
        app::Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Boxed* this_ptr,
        app::DateTimeZoneHandling__Enum value
    )
} // namespace app::classes::System::Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_
