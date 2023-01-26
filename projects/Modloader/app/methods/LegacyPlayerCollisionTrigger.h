#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LegacyPlayerCollisionTrigger {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2F6B0, void, OnTriggerEnter, (app::LegacyPlayerCollisionTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00A2F840, void, OnTriggerEnable, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2F8D0, void, OnTriggerDisable, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17190, void, Awake, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2F960, void, FixedUpdate, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2FEA0, app::String*, get_StressTestName, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2FF20, void, OnTriggerStartStressTest, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A30260, void, StartStressTest, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A30450, void, StressTestUpdate, (app::LegacyPlayerCollisionTrigger * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00A30540, void, EndStressTest, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855600, app::StressTestStatus__Enum, get_StressTestStatus, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15650, void, set_StressTestStatus, (app::LegacyPlayerCollisionTrigger * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A306D0, bool, get_CanExecuteStressTest, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, (app::LegacyPlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, (app::LegacyPlayerCollisionTrigger * this_ptr))
} // namespace app::classes::LegacyPlayerCollisionTrigger
