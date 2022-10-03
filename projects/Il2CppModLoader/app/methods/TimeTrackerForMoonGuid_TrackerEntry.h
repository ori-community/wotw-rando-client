#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TimeTrackerForMoonGuid_TrackerEntry {
    IL2CPP_REGISTER_METHOD(0x010F23A0, void, ctor, (app::TimeTrackerForMoonGuid_TrackerEntry * this_ptr, app::MoonGuid* guid, float timeout))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_TimeRegistered, (app::TimeTrackerForMoonGuid_TrackerEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_TimeRegistered, (app::TimeTrackerForMoonGuid_TrackerEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_TimeToUnregister, (app::TimeTrackerForMoonGuid_TrackerEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_TimeToUnregister, (app::TimeTrackerForMoonGuid_TrackerEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x010F23B0, void, SetTimeout, (app::TimeTrackerForMoonGuid_TrackerEntry * this_ptr, float timeout))
    IL2CPP_REGISTER_METHOD(0x010F2490, bool, ShouldRemove, (app::TimeTrackerForMoonGuid_TrackerEntry * this_ptr))
} // namespace app::classes::TimeTrackerForMoonGuid_TrackerEntry
