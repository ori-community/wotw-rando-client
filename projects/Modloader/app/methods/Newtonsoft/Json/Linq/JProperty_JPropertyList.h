#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/JProperty_JPropertyList.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JToken__Array.h>

namespace app::classes::Newtonsoft::Json::Linq::JProperty_JPropertyList {
    IL2CPP_REGISTER_METHOD(0x01F0E2D0, app::IEnumerator_1_Newtonsoft_Json_Linq_JToken_*, GetEnumerator, (app::JProperty_JPropertyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0E2D0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::JProperty_JPropertyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, Add, (app::JProperty_JPropertyList * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x0063D180, void, Clear, (app::JProperty_JPropertyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0E420, bool, Contains, (app::JProperty_JPropertyList * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0E430, void, CopyTo, (app::JProperty_JPropertyList * this_ptr, app::JToken__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x01F0E4B0, bool, Remove, (app::JProperty_JPropertyList * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0E4D0, int32_t, get_Count, (app::JProperty_JPropertyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::JProperty_JPropertyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0E4E0, int32_t, IndexOf, (app::JProperty_JPropertyList * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0E4F0, void, Insert, (app::JProperty_JPropertyList * this_ptr, int32_t index, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0E500, void, RemoveAt, (app::JProperty_JPropertyList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F0E510, app::JToken*, get_Item, (app::JProperty_JPropertyList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F0E4F0, void, set_Item, (app::JProperty_JPropertyList * this_ptr, int32_t index, app::JToken* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JProperty_JPropertyList * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Linq::JProperty_JPropertyList
