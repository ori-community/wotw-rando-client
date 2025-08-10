#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Char_.h>
#include <Modloader/app/structs/IList_1_System_Char_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Char_.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Char_ {
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor, app::ReadOnlyCollection_1_System_Char_* this_ptr, app::IList_1_System_Char_* list)
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFE3E0, char16_t, get_Item, app::ReadOnlyCollection_1_System_Char_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02EC3C40, bool, Contains, app::ReadOnlyCollection_1_System_Char_* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02B7DEC0, void, CopyTo, app::ReadOnlyCollection_1_System_Char_* this_ptr, app::Char__Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_System_Char_*, GetEnumerator, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EC3CB0, int32_t, IndexOf, app::ReadOnlyCollection_1_System_Char_* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CFE3E0, char16_t, System_Collections_Generic_IList_T__get_Item, app::ReadOnlyCollection_1_System_Char_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__set_Item,
        app::ReadOnlyCollection_1_System_Char_* this_ptr,
        int32_t index,
        char16_t value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Add, app::ReadOnlyCollection_1_System_Char_* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_ICollection_T__Clear, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02B7E070,
        void,
        System_Collections_Generic_IList_T__Insert,
        app::ReadOnlyCollection_1_System_Char_* this_ptr,
        int32_t index,
        char16_t value
    )
    IL2CPP_REGISTER_METHOD(0x02B7E070, bool, System_Collections_Generic_ICollection_T__Remove, app::ReadOnlyCollection_1_System_Char_* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, System_Collections_Generic_IList_T__RemoveAt, app::ReadOnlyCollection_1_System_Char_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02EC3D20, app::IEnumerator*, IEnumerable_GetEnumerator, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EC3DB0, app::Object*, ICollection_get_SyncRoot, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EC3F40, void, ICollection_CopyTo, app::ReadOnlyCollection_1_System_Char_* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsFixedSize, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IList_get_IsReadOnly, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EC4340, app::Object*, IList_get_Item, app::ReadOnlyCollection_1_System_Char_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_set_Item, app::ReadOnlyCollection_1_System_Char_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, int32_t, IList_Add, app::ReadOnlyCollection_1_System_Char_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Clear, app::ReadOnlyCollection_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02EC43E0, bool, IsCompatibleObject, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02EC44C0, bool, IList_Contains, app::ReadOnlyCollection_1_System_Char_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02EC4590, int32_t, IList_IndexOf, app::ReadOnlyCollection_1_System_Char_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Insert, app::ReadOnlyCollection_1_System_Char_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_Remove, app::ReadOnlyCollection_1_System_Char_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02B7E070, void, IList_RemoveAt, app::ReadOnlyCollection_1_System_Char_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Char_
