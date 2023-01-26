#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_.h>
#include <Modloader/app/structs/RaceLeaderBoard.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_ * this_ptr, app::String* key, app::RaceLeaderBoard** value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_ * this_ptr, app::String* key, app::RaceLeaderBoard* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_Race_RaceLeaderBoard_
