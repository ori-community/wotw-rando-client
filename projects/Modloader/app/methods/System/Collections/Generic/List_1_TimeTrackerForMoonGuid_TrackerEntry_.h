#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_TimeTrackerForMoonGuid_TrackerEntry_.h>
#include <Modloader/app/structs/TimeTrackerForMoonGuid_TrackerEntry.h>

namespace app::classes::System::Collections::Generic::List_1_TimeTrackerForMoonGuid_TrackerEntry_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_TimeTrackerForMoonGuid_TrackerEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744480, List_1_TimeTrackerForMoonGuid_TrackerEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::TimeTrackerForMoonGuid_TrackerEntry*, get_Item, (app::List_1_TimeTrackerForMoonGuid_TrackerEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477BD48, List_1_TimeTrackerForMoonGuid_TrackerEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_TimeTrackerForMoonGuid_TrackerEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704F78, List_1_TimeTrackerForMoonGuid_TrackerEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_TimeTrackerForMoonGuid_TrackerEntry_ * this_ptr, app::TimeTrackerForMoonGuid_TrackerEntry* item))
    IL2CPP_REGISTER_METHODINFO(0x04749968, List_1_TimeTrackerForMoonGuid_TrackerEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_TimeTrackerForMoonGuid_TrackerEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478A9C0, List_1_TimeTrackerForMoonGuid_TrackerEntry__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_TimeTrackerForMoonGuid_TrackerEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AF80, List_1_TimeTrackerForMoonGuid_TrackerEntry___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_TimeTrackerForMoonGuid_TrackerEntry_
