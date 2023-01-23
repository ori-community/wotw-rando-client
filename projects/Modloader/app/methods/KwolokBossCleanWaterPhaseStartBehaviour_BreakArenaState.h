#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour.h>

namespace app::classes::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState {
    IL2CPP_REGISTER_METHOD(0x01251B60, void, ctor, (app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState * this_ptr, app::KwolokBossCleanWaterPhaseStartBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01251B70, void, OnEnter, (app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01251D60, void, OnExit, (app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0124A6C0, void, OnBreakArenaTimelineStop, (app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737EF8, KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState_OnBreakArenaTimelineStop__MethodInfo)
} // namespace app::classes::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState
