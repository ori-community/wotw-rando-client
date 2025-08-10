#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/List_1_System_Collections_DictionaryEntry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Collections_DictionaryEntry___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Collections_DictionaryEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x0014CA00,
        void,
        ctor,
        app::List_1_T_Enumerator_System_Collections_DictionaryEntry___Boxed* this_ptr,
        app::List_1_System_Collections_DictionaryEntry_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_System_Collections_DictionaryEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CA30, bool, MoveNext, app::List_1_T_Enumerator_System_Collections_DictionaryEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CAF0, bool, MoveNextRare, app::List_1_T_Enumerator_System_Collections_DictionaryEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00136440, app::DictionaryEntry, get_Current, app::List_1_T_Enumerator_System_Collections_DictionaryEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CB40, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_System_Collections_DictionaryEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CC00, void, IEnumerator_Reset, app::List_1_T_Enumerator_System_Collections_DictionaryEntry___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_System_Collections_DictionaryEntry_
