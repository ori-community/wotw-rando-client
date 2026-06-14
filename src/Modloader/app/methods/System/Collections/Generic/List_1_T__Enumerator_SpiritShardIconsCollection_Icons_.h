#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SpiritShardIconsCollection_Icons___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_SpiritShardIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(
        0x0014D4F0,
        void,
        ctor,
        app::List_1_T_Enumerator_SpiritShardIconsCollection_Icons___Boxed* this_ptr,
        app::List_1_SpiritShardIconsCollection_Icons_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_SpiritShardIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D530, bool, MoveNext, app::List_1_T_Enumerator_SpiritShardIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D610, bool, MoveNextRare, app::List_1_T_Enumerator_SpiritShardIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00133F90,
        app::SpiritShardIconsCollection_Icons,
        get_Current,
        app::List_1_T_Enumerator_SpiritShardIconsCollection_Icons___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014D660, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_SpiritShardIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014D720, void, IEnumerator_Reset, app::List_1_T_Enumerator_SpiritShardIconsCollection_Icons___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_SpiritShardIconsCollection_Icons_
