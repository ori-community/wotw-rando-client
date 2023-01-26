#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Timeline_MoonTimeline_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::MoonTimeline* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::MoonTimeline* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_Timeline_MoonTimeline_, GetEnumerator, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::MoonTimeline*, get_Item, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::MoonTimeline* item))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Timeline_MoonTimeline_
