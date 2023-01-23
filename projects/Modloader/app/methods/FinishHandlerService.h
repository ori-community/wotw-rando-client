#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FinishHandlerService.h>
#include <Modloader/app/structs/List_1_GhostPlayer_.h>
#include <Modloader/app/structs/RaceStateMachineContext.h>

namespace app::classes::FinishHandlerService {
    IL2CPP_REGISTER_METHOD(0x01255F50, void, Setup, (app::FinishHandlerService * this_ptr, app::List_1_GhostPlayer_* ghosts))
    IL2CPP_REGISTER_METHOD(0x01256000, void, Update, (app::FinishHandlerService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x01256210, void, OnGhostArrived, (app::FinishHandlerService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x01256320, void, OnPlayerArrived, (app::FinishHandlerService * this_ptr, app::RaceStateMachineContext* ctx))
    IL2CPP_REGISTER_METHOD(0x012563E0, void, Dispose, (app::FinishHandlerService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012563F0, void, ctor, (app::FinishHandlerService * this_ptr))
} // namespace app::classes::FinishHandlerService
