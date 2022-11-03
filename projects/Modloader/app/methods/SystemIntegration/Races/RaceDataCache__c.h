#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SystemIntegration::Races::RaceDataCache___c {
    IL2CPP_REGISTER_METHOD(0x00529B00, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RaceDataCache_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529C40, bool, _RemoveOwnEntries_b__14_0, (app::RaceDataCache_c * this_ptr, app::KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_ o))
    IL2CPP_REGISTER_METHODINFO(0x0478BA88, RaceDataCache_c__RemoveOwnEntries_b__14_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529CD0, app::RaceEntry*, _Set_b__15_0, (app::RaceDataCache_c * this_ptr, app::KeyValuePair_2_System_String_SystemIntegration_Races_RaceEntry_ o))
    IL2CPP_REGISTER_METHODINFO(0x0477E690, RaceDataCache_c__Set_b__15_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529D50, app::DateTime, _Set_b__15_2, (app::RaceDataCache_c * this_ptr, app::RaceEntry* o))
    IL2CPP_REGISTER_METHODINFO(0x04795340, RaceDataCache_c__Set_b__15_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529D70, void, _Deserialize_b__17_1, (app::RaceDataCache_c * this_ptr, app::Task* t))
    IL2CPP_REGISTER_METHODINFO(0x047235A8, RaceDataCache_c__Deserialize_b__17_1__MethodInfo)
} // namespace app::classes::SystemIntegration::Races::RaceDataCache___c
