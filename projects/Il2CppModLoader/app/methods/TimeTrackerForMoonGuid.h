#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TimeTrackerForMoonGuid {
    IL2CPP_REGISTER_METHOD(0x010F1430, void, Awake, (app::TimeTrackerForMoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F14C0, void, OnEnable, (app::TimeTrackerForMoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F1660, void, OnDisable, (app::TimeTrackerForMoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F1800, void, OnRestoreCheckpoint, (app::TimeTrackerForMoonGuid * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794090, TimeTrackerForMoonGuid_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010F18B0, void, RegisterGuid_1, (app::TimeTrackerForMoonGuid * this_ptr, app::MoonGuid * guid, float timeout))
    IL2CPP_REGISTER_METHOD(0x010F1B00, void, UnregisterGuid_1, (app::TimeTrackerForMoonGuid * this_ptr, app::MoonGuid * guid))
    IL2CPP_REGISTER_METHOD(0x010F1C40, void, RegisterGuid_2, (app::TimeTrackerForMoonGuid * this_ptr, app::GuidOwner * guidowner, float timeout))
    IL2CPP_REGISTER_METHOD(0x010F1C60, void, UnregisterGuid_2, (app::TimeTrackerForMoonGuid * this_ptr, app::GuidOwner * guidowner))
    IL2CPP_REGISTER_METHOD(0x010F1DB0, bool, IsGuidOnTimeout_1, (app::TimeTrackerForMoonGuid * this_ptr, app::MoonGuid * guid))
    IL2CPP_REGISTER_METHOD(0x010F1EF0, bool, IsGuidOnTimeout_2, (app::TimeTrackerForMoonGuid * this_ptr, app::GuidOwner * guidowner))
    IL2CPP_REGISTER_METHOD(0x010F2030, void, LateUpdate, (app::TimeTrackerForMoonGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F2240, void, ctor, (app::TimeTrackerForMoonGuid * this_ptr))
}
