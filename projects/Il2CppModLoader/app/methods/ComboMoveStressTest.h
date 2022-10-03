#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ComboMoveStressTest {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IComboMove*, get_ComboMove, (app::ComboMoveStressTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ComboMoveStressTest * this_ptr, app::IComboMove* move))
    IL2CPP_REGISTER_METHOD(0x011DE600, void, StartStressTest, (app::ComboMoveStressTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DE6F0, void, StressTestUpdate, (app::ComboMoveStressTest * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::ComboMoveStressTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, app::StressTestStatus__Enum, get_StressTestStatus, (app::ComboMoveStressTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_StressTestStatus, (app::ComboMoveStressTest * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanExecuteStressTest, (app::ComboMoveStressTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::ComboMoveStressTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DE7C0, app::String*, get_StressTestName, (app::ComboMoveStressTest * this_ptr))
} // namespace app::classes::ComboMoveStressTest
