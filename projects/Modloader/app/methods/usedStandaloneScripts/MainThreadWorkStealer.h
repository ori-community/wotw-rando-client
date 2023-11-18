#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MainThreadWorkStealer_WorkStealingMode__Enum.h>
#include <Modloader/app/structs/MainThreadWorkStealer.h>
#include <Modloader/app/structs/MainThreadWorkStealer_TimeBudgetMode__Enum.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>

namespace app::classes::usedStandaloneScripts::MainThreadWorkStealer {
    IL2CPP_REGISTER_METHOD(0x03125FF0, app::MainThreadWorkStealer_WorkStealingMode__Enum, get_StealingMode, ())
    IL2CPP_REGISTER_METHOD(0x03126090, void, set_StealingMode, (app::MainThreadWorkStealer_WorkStealingMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x03126140, app::MainThreadWorkStealer_TimeBudgetMode__Enum, get_TimeMode, ())
    IL2CPP_REGISTER_METHOD(0x031261E0, void, set_TimeMode, (app::MainThreadWorkStealer_TimeBudgetMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x03126290, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x03126330, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x031263E0, void, TickFrame, ())
    IL2CPP_REGISTER_METHOD(0x03126710, void, InjectToPlayerLoopEarly, (app::PlayerLoopSystem * player_loop))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MainThreadWorkStealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03126940, void, cctor, ())
} // namespace app::classes::usedStandaloneScripts::MainThreadWorkStealer
