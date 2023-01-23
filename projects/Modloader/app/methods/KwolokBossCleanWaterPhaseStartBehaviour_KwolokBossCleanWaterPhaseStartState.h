#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour.h>

namespace app::classes::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState {
    IL2CPP_REGISTER_METHOD(0x01251F50, void, ctor, (app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState * this_ptr, app::KwolokBossCleanWaterPhaseStartBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState * this_ptr))
} // namespace app::classes::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState
