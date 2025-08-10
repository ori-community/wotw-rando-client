#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonPosition.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_JsonPosition_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_JsonPosition___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Newtonsoft_Json_JsonPosition_ {
    IL2CPP_REGISTER_METHOD(0x001F7BF0, bool, get_HasValue, app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00152100, app::JsonPosition, GetValueOrDefault_1, app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F7BD0, void, ctor, app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr, app::JsonPosition value)
    IL2CPP_REGISTER_METHOD(0x001F7C00, app::JsonPosition, get_Value, app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001F7D00, bool, Equals_1, app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(
        0x001F7D70,
        bool,
        Equals_2,
        app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr,
        app::Nullable_1_Newtonsoft_Json_JsonPosition_ other
    )
    IL2CPP_REGISTER_METHOD(0x001F7DF0, int32_t, GetHashCode, app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F7EB0,
        app::JsonPosition,
        GetValueOrDefault_2,
        app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr,
        app::JsonPosition default_value
    )
    IL2CPP_REGISTER_METHOD(0x001F7EF0, app::String*, ToString, app::Nullable_1_Newtonsoft_Json_JsonPosition___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02550CD0, app::Object*, Box, app::Nullable_1_Newtonsoft_Json_JsonPosition_ o)
    IL2CPP_REGISTER_METHOD(0x02550D60, app::Nullable_1_Newtonsoft_Json_JsonPosition_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Newtonsoft_Json_JsonPosition_
