#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/OrderedDictionary_OrderedDictionaryKeyValueCollection.h>

namespace app::classes::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, app::OrderedDictionary_OrderedDictionaryKeyValueCollection* this_ptr, app::ArrayList* array, bool is_keys)
    IL2CPP_REGISTER_METHOD(
        0x0249D9D0,
        void,
        ICollection_CopyTo,
        app::OrderedDictionary_OrderedDictionaryKeyValueCollection* this_ptr,
        app::Array* array,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, ICollection_get_Count, app::OrderedDictionary_OrderedDictionaryKeyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::OrderedDictionary_OrderedDictionaryKeyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCB830, app::Object*, ICollection_get_SyncRoot, app::OrderedDictionary_OrderedDictionaryKeyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249DCB0, app::IEnumerator*, IEnumerable_GetEnumerator, app::OrderedDictionary_OrderedDictionaryKeyValueCollection* this_ptr)
} // namespace app::classes::System::Collections::Specialized::OrderedDictionary_OrderedDictionaryKeyValueCollection
