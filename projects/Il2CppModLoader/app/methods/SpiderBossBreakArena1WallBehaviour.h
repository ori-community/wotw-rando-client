#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiderBossBreakArena1WallBehaviour {
    IL2CPP_REGISTER_METHOD(0x00969BA0, void, OnEnterTask, (app::SpiderBossBreakArena1WallBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00969F70, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpiderBossBreakArena1WallBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00969FA0, void, OnExitTask, (app::SpiderBossBreakArena1WallBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, ShouldPauseLocomotion, (app::SpiderBossBreakArena1WallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096A160, void, OnBreakWallTrigger, (app::SpiderBossBreakArena1WallBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E3C0, SpiderBossBreakArena1WallBehaviour_OnBreakWallTrigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0096A2C0, void, ctor, (app::SpiderBossBreakArena1WallBehaviour * this_ptr))
} // namespace app::classes::SpiderBossBreakArena1WallBehaviour
