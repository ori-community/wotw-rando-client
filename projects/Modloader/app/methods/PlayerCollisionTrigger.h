#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayerCollisionTrigger {
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140BD50, void, OnTriggerEnter, (app::PlayerCollisionTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x0140BF10, void, OnTriggerExit, (app::PlayerCollisionTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x0140BFA0, void, OnTriggerEnable, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140C030, void, OnTriggerDisable, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140C0C0, void, Awake, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140C290, void, FixedUpdate, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140C7F0, app::String*, get_StressTestName, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140C870, void, OnTriggerStartStressTest, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047168D8, PlayerCollisionTrigger_OnTriggerStartStressTest__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0140CBB0, void, StartStressTest, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140CD60, void, StressTestUpdate, (app::PlayerCollisionTrigger * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0140CE30, void, EndStressTest, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519C0, app::StressTestStatus__Enum, get_StressTestStatus, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519D0, void, set_StressTestStatus, (app::PlayerCollisionTrigger * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x0140CFC0, bool, get_CanExecuteStressTest, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, (app::PlayerCollisionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140D120, void, ctor, (app::PlayerCollisionTrigger * this_ptr))
} // namespace app::classes::PlayerCollisionTrigger
