#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Collection_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IList_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/JsonProperty__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::ObjectModel::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ {
    IL2CPP_REGISTER_METHOD(0x02B833F0, app::IEnumerator_1_Newtonsoft_Json_Serialization_JsonProperty_*, GetEnumerator, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IList_1_Newtonsoft_Json_Serialization_JsonProperty_*, get_Items, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA8D0, bool, Remove, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::JsonProperty* item))
    IL2CPP_REGISTER_METHOD(0x02CFA500, void, Add, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::JsonProperty* item))
    IL2CPP_REGISTER_METHOD(0x02B7DF30, int32_t, get_Count, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA760, int32_t, IndexOf, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::JsonProperty* item))
    IL2CPP_REGISTER_METHOD(0x02CFA3A0, app::JsonProperty*, get_Item, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CFA400, void, set_Item, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, int32_t index, app::JsonProperty* value))
    IL2CPP_REGISTER_METHOD(0x02CFA7D0, void, Insert, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, int32_t index, app::JsonProperty* item))
    IL2CPP_REGISTER_METHOD(0x02CFA9D0, void, RemoveAt, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CFACA0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA5F0, void, Clear, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA6F0, bool, Contains, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::JsonProperty* item))
    IL2CPP_REGISTER_METHOD(0x02CFA680, void, CopyTo, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::JsonProperty__Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CFAD00, app::IEnumerator*, IEnumerable_GetEnumerator, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFA3A0, app::Object*, IList_get_Item, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CFB2F0, void, IList_set_Item, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CFB560, int32_t, IList_Add, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CFB740, bool, IList_Contains, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CFACA0, bool, IList_get_IsReadOnly, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFB470, bool, IList_get_IsFixedSize, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFB810, int32_t, IList_IndexOf, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CFB8F0, void, IList_Insert, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CFBAD0, void, IList_Remove, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02CFAF20, void, ICollection_CopyTo, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CFAD90, app::Object*, ICollection_get_SyncRoot, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ * this_ptr))
} // namespace app::classes::System::Collections::ObjectModel::Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
