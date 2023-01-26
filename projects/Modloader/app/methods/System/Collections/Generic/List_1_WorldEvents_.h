#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_WorldEvents_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_WorldEvents_.h>
#include <Modloader/app/structs/WorldEvents.h>

namespace app::classes::System::Collections::Generic::List_1_WorldEvents_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_WorldEvents_ * this_ptr, app::WorldEvents* item))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_WorldEvents_ * this_ptr, app::WorldEvents* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_WorldEvents_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_WorldEvents_, GetEnumerator, (app::List_1_WorldEvents_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_WorldEvents_
