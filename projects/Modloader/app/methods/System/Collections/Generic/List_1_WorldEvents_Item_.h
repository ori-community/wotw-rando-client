#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WorldEvents_Item.h>
#include <Modloader/app/structs/List_1_WorldEvents_Item_.h>
#include <Modloader/app/structs/Predicate_1_WorldEvents_Item_.h>

namespace app::classes::System::Collections::Generic::List_1_WorldEvents_Item_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WorldEvents_Item*, get_Item, (app::List_1_WorldEvents_Item_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_WorldEvents_Item_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::WorldEvents_Item*, Find, (app::List_1_WorldEvents_Item_ * this_ptr, app::Predicate_1_WorldEvents_Item_* match))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_WorldEvents_Item_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_WorldEvents_Item_
