#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_WeakPrefab_.h>
#include <Modloader/app/structs/List_1_WeakPrefab_.h>
#include <Modloader/app/structs/WeakPrefab.h>

namespace app::classes::System::Collections::Generic::List_1_WeakPrefab_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WeakPrefab*, get_Item, app::List_1_WeakPrefab_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_WeakPrefab_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_WeakPrefab_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_WeakPrefab_, GetEnumerator, app::List_1_WeakPrefab_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_WeakPrefab_
