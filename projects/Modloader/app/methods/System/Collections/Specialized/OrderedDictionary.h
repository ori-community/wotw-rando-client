#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OrderedDictionary.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Specialized::OrderedDictionary {
    IL2CPP_REGISTER_METHOD(0x0249BA70, void, ctor_1, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249BA80, void, ctor_2, app::OrderedDictionary* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0249BA90, void, ctor_3, app::OrderedDictionary* this_ptr, int32_t capacity, app::IEqualityComparer* comparer)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, ctor_4, app::OrderedDictionary* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0249BAA0, int32_t, get_Count, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, IDictionary_get_IsFixedSize, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsReadOnly, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249BAD0, app::ICollection*, get_Keys, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249BC20, app::ArrayList*, get_objectsArray, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249BD80, app::Hashtable*, get_objectsTable, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249BF00, app::Object*, ICollection_get_SyncRoot, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249C060, app::Object*, get_Item, app::OrderedDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0249C0A0, void, set_Item, app::OrderedDictionary* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0249C380, app::ICollection*, get_Values, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249C4D0, void, Add, app::OrderedDictionary* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0249C620, void, Clear, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249C730, bool, Contains, app::OrderedDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0249C770, void, CopyTo, app::OrderedDictionary* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0249C7C0, int32_t, IndexOfKey, app::OrderedDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0249C950, void, OnDeserialization, app::OrderedDictionary* this_ptr, app::Object* sender)
    IL2CPP_REGISTER_METHOD(0x0249CCC0, void, Remove, app::OrderedDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x0249CE40, app::IDictionaryEnumerator*, GetEnumerator, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249CFC0, app::IEnumerator*, IEnumerable_GetEnumerator, app::OrderedDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249D140, void, GetObjectData, app::OrderedDictionary* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x018687B0, void, IDeserializationCallback_OnDeserialization, app::OrderedDictionary* this_ptr, app::Object* sender)
} // namespace app::classes::System::Collections::Specialized::OrderedDictionary
