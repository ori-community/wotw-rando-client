#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_* this_ptr,
        app::String* key,
        app::JToken* value
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor,
        app::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_* this_ptr,
        app::IEqualityComparer_1_System_String_* comparer
    )
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_* this_ptr,
        app::String* key,
        app::JToken** value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_String_Newtonsoft_Json_Linq_JToken_*,
        get_Keys,
        app::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Newtonsoft_Json_Linq_JToken_
