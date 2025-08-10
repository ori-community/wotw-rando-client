#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/MinerBuilderIdleBehaviour.h>

namespace app::classes::MinerBuilderIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, app::MinerBuilderIdleBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014477F0, void, OnExecute, app::MinerBuilderIdleBehaviour* this_ptr, app::IBlackboard* blackboard)
    IL2CPP_REGISTER_METHOD(0x00EDFC40, void, OnUpdateBehaviour, app::MinerBuilderIdleBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetShouldPauseTree, app::MinerBuilderIdleBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, app::MinerBuilderIdleBehaviour* this_ptr)
} // namespace app::classes::MinerBuilderIdleBehaviour
