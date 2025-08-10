#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/Comparison_1_CleverMenuItem_.h>
#include <Modloader/app/structs/IEnumerable_1_CleverMenuItem_.h>
#include <Modloader/app/structs/List_1_CleverMenuItem_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_CleverMenuItem_.h>
#include <Modloader/app/structs/Predicate_1_CleverMenuItem_.h>

namespace app::classes::System::Collections::Generic::List_1_CleverMenuItem_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_CleverMenuItem_, GetEnumerator, app::List_1_CleverMenuItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CleverMenuItem*, get_Item, app::List_1_CleverMenuItem_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_CleverMenuItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_CleverMenuItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_CleverMenuItem_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_CleverMenuItem_* this_ptr, app::CleverMenuItem* item)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, app::List_1_CleverMenuItem_* this_ptr, int32_t index, app::CleverMenuItem* item)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, app::List_1_CleverMenuItem_* this_ptr, app::Predicate_1_CleverMenuItem_* match)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_2, app::List_1_CleverMenuItem_* this_ptr, app::IEnumerable_1_CleverMenuItem_* collection)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_CleverMenuItem_* this_ptr, app::CleverMenuItem* item)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_CleverMenuItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, app::List_1_CleverMenuItem_* this_ptr, app::Comparison_1_CleverMenuItem_* comparison)
} // namespace app::classes::System::Collections::Generic::List_1_CleverMenuItem_
