#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Required___Boxed.h>
#include <Modloader/app/structs/Required__Enum.h>

namespace app::classes::System::Nullable_1_Newtonsoft_Json_Required_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, (app::Nullable_1_Newtonsoft_Json_Required___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::Nullable_1_Newtonsoft_Json_Required___Boxed * this_ptr, app::Required__Enum value))
    IL2CPP_REGISTER_METHOD(0x0020E4F0, app::Required__Enum, GetValueOrDefault_1, (app::Nullable_1_Newtonsoft_Json_Required___Boxed * this_ptr, app::Required__Enum default_value))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::Required__Enum, GetValueOrDefault_2, (app::Nullable_1_Newtonsoft_Json_Required___Boxed * this_ptr))
} // namespace app::classes::System::Nullable_1_Newtonsoft_Json_Required_
