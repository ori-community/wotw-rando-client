#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonToken__Enum_1.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_JsonToken___Boxed.h>

namespace app::classes::System::Nullable_1_Newtonsoft_Json_JsonToken_ {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, app::Nullable_1_Newtonsoft_Json_JsonToken___Boxed* this_ptr, app::JsonToken__Enum_1 value)
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_Newtonsoft_Json_JsonToken___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010E170, app::JsonToken__Enum_1, GetValueOrDefault, app::Nullable_1_Newtonsoft_Json_JsonToken___Boxed* this_ptr)
} // namespace app::classes::System::Nullable_1_Newtonsoft_Json_JsonToken_
