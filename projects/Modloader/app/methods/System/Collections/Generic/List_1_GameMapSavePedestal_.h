#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameMapSavePedestal.h>
#include <Modloader/app/structs/List_1_GameMapSavePedestal_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_GameMapSavePedestal_.h>
#include <Modloader/app/structs/Predicate_1_GameMapSavePedestal_.h>

namespace app::classes::System::Collections::Generic::List_1_GameMapSavePedestal_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_GameMapSavePedestal_, GetEnumerator, app::List_1_GameMapSavePedestal_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GameMapSavePedestal*, get_Item, app::List_1_GameMapSavePedestal_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_GameMapSavePedestal_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9A20, int32_t, FindIndex, app::List_1_GameMapSavePedestal_* this_ptr, app::Predicate_1_GameMapSavePedestal_* match)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_GameMapSavePedestal_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_GameMapSavePedestal_
