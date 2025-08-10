#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/RaceEntry.h>

namespace app::classes::System::Collections::Generic::List_1_SystemIntegration_Races_RaceEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_SystemIntegration_Races_RaceEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RaceEntry*, get_Item, app::List_1_SystemIntegration_Races_RaceEntry_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_SystemIntegration_Races_RaceEntry_
