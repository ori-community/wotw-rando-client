#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringCollection.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Collections::Specialized::StringCollection {
    IL2CPP_REGISTER_METHOD(0x0249DE30, app::String*, get_Item, app::StringCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0249DF00, void, set_Item, app::StringCollection* this_ptr, int32_t index, app::String* value)
    IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, app::StringCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsReadOnly, app::StringCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IList_get_IsFixedSize, app::StringCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021C0B60, int32_t, Add, app::StringCollection* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01717420, void, Clear, app::StringCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DFFCE0, bool, Contains, app::StringCollection* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01FF5420, void, CopyTo, app::StringCollection* this_ptr, app::String__Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02031830, int32_t, IndexOf, app::StringCollection* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0249DF30, void, Insert, app::StringCollection* this_ptr, int32_t index, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, app::StringCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249DF60, void, Remove, app::StringCollection* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0249DF90, void, RemoveAt, app::StringCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01BCB830, app::Object*, get_SyncRoot, app::StringCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249DE30, app::Object*, IList_get_Item, app::StringCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0249DFC0, void, IList_set_Item, app::StringCollection* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0249E0A0, int32_t, IList_Add, app::StringCollection* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0249E170, bool, IList_Contains, app::StringCollection* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0249E240, int32_t, IList_IndexOf, app::StringCollection* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0249E310, void, IList_Insert, app::StringCollection* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0249E3F0, void, IList_Remove, app::StringCollection* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01FF5420, void, ICollection_CopyTo, app::StringCollection* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01BDD500, app::IEnumerator*, IEnumerable_GetEnumerator, app::StringCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0249E4C0, void, ctor, app::StringCollection* this_ptr)
} // namespace app::classes::System::Collections::Specialized::StringCollection
