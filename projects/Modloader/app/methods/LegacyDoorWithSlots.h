#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyDoorWithSlots.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LegacyDoorWithSlots {
    IL2CPP_REGISTER_METHOD(0x00A1AEA0, int32_t, get_NumberOfOrbsUsed, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1AF60, void, set_NumberOfOrbsUsed, (app::LegacyDoorWithSlots * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00A1B030, void, OnValidate, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1B0A0, void, Awake, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1B240, void, Highlight, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1B820, void, Unhighlight, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1BB70, void, RestoreOrbs, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1BD40, void, OnEnable, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1BE00, void, OnDisable, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1BEF0, void, Serialize, (app::LegacyDoorWithSlots * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00A1C130, float, get_DistanceToSein, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1C2E0, bool, get_OriHasTargets, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1C400, bool, get_SeinInRange, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1C670, void, FixedUpdate, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1D550, void, OpenDoor, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1D8D0, void, MakeSureItsAtEnd, (app::LegacyDoorWithSlots * this_ptr, app::Transform* c))
    IL2CPP_REGISTER_METHOD(0x00A1D9C0, void, StartStressTest, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (app::LegacyDoorWithSlots * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660200, app::StressTestStatus__Enum, get_StressTestStatus, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1D9E0, void, set_StressTestStatus, (app::LegacyDoorWithSlots * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A1D9F0, bool, get_CanExecuteStressTest, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1DB90, app::String*, get_StressTestName, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1DC10, void, ctor, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1DC30, void, _OpenDoor_b__43_0, (app::LegacyDoorWithSlots * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047152D8, LegacyDoorWithSlots__OpenDoor_b__43_0__MethodInfo)
} // namespace app::classes::LegacyDoorWithSlots
