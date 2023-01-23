#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShrineCombat_RunningState.h>
#include <Modloader/app/structs/ShrineCombat.h>

namespace app::classes::ShrineCombat_RunningState {
    IL2CPP_REGISTER_METHOD(0x0073CAB0, void, ctor, (app::ShrineCombat_RunningState * this_ptr, app::ShrineCombat* combat_shrine))
    IL2CPP_REGISTER_METHOD(0x0073D140, void, OnEnter, (app::ShrineCombat_RunningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073D390, void, UpdateState, (app::ShrineCombat_RunningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073D600, void, OnExit, (app::ShrineCombat_RunningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073D720, void, CancelArena, (app::ShrineCombat_RunningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073D850, void, CompleteShrine, (app::ShrineCombat_RunningState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073DA20, void, NotifyArenaCompleted, (app::ShrineCombat_RunningState * this_ptr))
} // namespace app::classes::ShrineCombat_RunningState
