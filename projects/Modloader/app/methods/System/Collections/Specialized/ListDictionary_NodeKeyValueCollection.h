#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ListDictionary.h>
#include <Modloader/app/structs/ListDictionary_NodeKeyValueCollection.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, app::ListDictionary_NodeKeyValueCollection* this_ptr, app::ListDictionary* list, bool is_keys)
    IL2CPP_REGISTER_METHOD(0x02495F70, void, ICollection_CopyTo, app::ListDictionary_NodeKeyValueCollection* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0202A9B0, int32_t, ICollection_get_Count, app::ListDictionary_NodeKeyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::ListDictionary_NodeKeyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024960E0, app::Object*, ICollection_get_SyncRoot, app::ListDictionary_NodeKeyValueCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02496240, app::IEnumerator*, IEnumerable_GetEnumerator, app::ListDictionary_NodeKeyValueCollection* this_ptr)
} // namespace app::classes::System::Collections::Specialized::ListDictionary_NodeKeyValueCollection
