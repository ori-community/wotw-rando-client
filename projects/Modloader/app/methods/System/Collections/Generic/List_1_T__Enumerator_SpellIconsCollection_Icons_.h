#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SpellIconsCollection_Icons_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SpellIconsCollection_Icons___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_SpellIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(
        0x0014D030,
        void,
        ctor,
        app::List_1_T_Enumerator_SpellIconsCollection_Icons___Boxed* this_ptr,
        app::List_1_SpellIconsCollection_Icons_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_SpellIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D070, bool, MoveNext, app::List_1_T_Enumerator_SpellIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D150, bool, MoveNextRare, app::List_1_T_Enumerator_SpellIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00133A80, app::SpellIconsCollection_Icons, get_Current, app::List_1_T_Enumerator_SpellIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D1A0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_SpellIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D260, void, IEnumerator_Reset, app::List_1_T_Enumerator_SpellIconsCollection_Icons___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_SpellIconsCollection_Icons_
