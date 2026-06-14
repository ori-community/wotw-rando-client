#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/ListDictionary.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::ListDictionary {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, ctor_2, app::ListDictionary* this_ptr, app::IComparer* comparer)
    IL2CPP_REGISTER_METHOD(0x02494840, app::Object*, get_Item, app::ListDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x024949A0, void, set_Item, app::ListDictionary* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Count, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02494BF0, app::ICollection*, get_Keys, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02494D40, app::Object*, get_SyncRoot, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02494EA0, app::ICollection*, get_Values, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02494FF0, void, Add, app::ListDictionary* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02029A50, void, Clear, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02495270, bool, Contains, app::ListDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x024953C0, void, CopyTo, app::ListDictionary* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02495570, app::IDictionaryEnumerator*, GetEnumerator, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024956D0, app::IEnumerator*, IEnumerable_GetEnumerator, app::ListDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02495830, void, Remove, app::ListDictionary* this_ptr, app::Object* key)
} // namespace app::classes::System::Collections::Specialized::ListDictionary
