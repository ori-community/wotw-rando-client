#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Race_ReplayValidator_Snapshot_.h>
#include <Modloader/app/structs/ReplayValidator_Snapshot.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Race_ReplayValidator_Snapshot_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_Race_ReplayValidator_Snapshot_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_Race_ReplayValidator_Snapshot_ * this_ptr, app::ReplayValidator_Snapshot* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ReplayValidator_Snapshot*, get_Item, (app::List_1_Moon_Race_ReplayValidator_Snapshot_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Race_ReplayValidator_Snapshot_
