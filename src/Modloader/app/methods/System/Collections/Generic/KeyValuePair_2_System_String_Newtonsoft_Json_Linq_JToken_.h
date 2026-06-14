#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_ {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_Key, app::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00107C10, app::JToken*, get_Value, app::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00110270,
        void,
        ctor,
        app::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken___Boxed* this_ptr,
        app::String* key,
        app::JToken* value
    )
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_String_Newtonsoft_Json_Linq_JToken_
