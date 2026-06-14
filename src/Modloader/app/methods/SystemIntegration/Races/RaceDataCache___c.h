#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/RaceDataCache_c.h>
#include <Modloader/app/structs/RaceEntry.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::SystemIntegration::Races::RaceDataCache___c {
    IL2CPP_REGISTER_METHOD(0x00529B00, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RaceDataCache_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00529C40,
        bool,
        _RemoveOwnEntries_b__14_0,
        app::RaceDataCache_c* this_ptr,
        app::KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_ o
    )
    IL2CPP_REGISTER_METHOD(
        0x00529CD0,
        app::RaceEntry*,
        _Set_b__15_0,
        app::RaceDataCache_c* this_ptr,
        app::KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_ o
    )
    IL2CPP_REGISTER_METHOD(0x00529D50, app::DateTime, _Set_b__15_2, app::RaceDataCache_c* this_ptr, app::RaceEntry* o)
    IL2CPP_REGISTER_METHOD(0x00529D70, void, _Deserialize_b__17_1, app::RaceDataCache_c* this_ptr, app::Task* t)
} // namespace app::classes::SystemIntegration::Races::RaceDataCache___c
