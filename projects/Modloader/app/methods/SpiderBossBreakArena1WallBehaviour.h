#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossBreakArena1WallBehaviour.h>

namespace app::classes::SpiderBossBreakArena1WallBehaviour {
    IL2CPP_REGISTER_METHOD(0x00969BA0, void, OnEnterTask, app::SpiderBossBreakArena1WallBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00969F70, app::BehaviourStatus__Enum, OnExecuteTask, app::SpiderBossBreakArena1WallBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00969FA0, void, OnExitTask, app::SpiderBossBreakArena1WallBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, ShouldPauseLocomotion, app::SpiderBossBreakArena1WallBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0096A160, void, OnBreakWallTrigger, app::SpiderBossBreakArena1WallBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0096A2C0, void, ctor, app::SpiderBossBreakArena1WallBehaviour* this_ptr)
} // namespace app::classes::SpiderBossBreakArena1WallBehaviour
