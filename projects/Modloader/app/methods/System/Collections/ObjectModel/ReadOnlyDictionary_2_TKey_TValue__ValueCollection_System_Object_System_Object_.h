#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyDictionary_2_TKey_TValue__ValueCollection_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_TValue__get_IsReadOnly, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B82E70, app::Object*, ICollection_get_SyncRoot, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B82A70, void, ctor_1, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::ICollection_1_System_Object_* collection))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_TValue__Add, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_TValue__Clear, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B82AA0, bool, System_Collections_Generic_ICollection_TValue__Contains, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02B7DEC0, void, CopyTo, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Object__Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHOD(0x02B7E070, bool, System_Collections_Generic_ICollection_TValue__Remove, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x02B82B10, app::IEnumerator_1_System_Object_*, GetEnumerator, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B82DE0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B82C00, void, ICollection_CopyTo, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B83000, void, ctor_2, (app::ReadOnlyDictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ * this_ptr))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyDictionary_2_TKey_TValue__ValueCollection_System_Object_System_Object_
