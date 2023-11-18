#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyGetAbilityPedestal.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/LegacyGetAbilityPedestal_States__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LegacyGetAbilityPedestal {
    IL2CPP_REGISTER_METHOD(0x00A253A0, bool, get_SeinInRange, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A255B0, void, ChangeState, (app::LegacyGetAbilityPedestal * this_ptr, app::LegacyGetAbilityPedestal_States__Enum state))
    IL2CPP_REGISTER_METHOD(0x00A25690, void, UpdateStates, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A256E0, void, UpdateOutOfRange, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A25710, void, ExitInRangeState, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A257E0, void, UpdateInRangeState, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A25BC0, void, FixedUpdate, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A25CA0, void, ActivatePedestal, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26360, void, Serialize, (app::LegacyGetAbilityPedestal * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00A263E0, void, Awake, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26450, void, OnStopPlaying, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26550, void, OnEnable, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26630, void, OnDisable, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26710, void, StartStressTest, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (app::LegacyGetAbilityPedestal * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00A26A70, void, EndStressTest, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC380, app::StressTestStatus__Enum, get_StressTestStatus, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26C10, void, set_StressTestStatus, (app::LegacyGetAbilityPedestal * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A26C20, bool, get_CanExecuteStressTest, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26DE0, void, FinishGetAbilityStressTest, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26DF0, app::String*, get_StressTestName, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26E70, void, ctor, (app::LegacyGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A26E90, void, cctor, ())
} // namespace app::classes::LegacyGetAbilityPedestal
