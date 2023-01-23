#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderBossDeathReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::SpiderBossDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0096B6C0, void, Awake, (app::SpiderBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096B860, void, OnDestroy, (app::SpiderBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SpiderBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0096BA00, void, OnEnterTask, (app::SpiderBossDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpiderBossDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0096BD00, void, OnExitTask, (app::SpiderBossDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0096BD50, void, OnPostRestoreCheckpoint, (app::SpiderBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476CBE8, SpiderBossDeathReactionBehaviour_OnPostRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0096BE70, void, OnDeathTimelineStopped, (app::SpiderBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794BC8, SpiderBossDeathReactionBehaviour_OnDeathTimelineStopped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0096BF30, void, OnTransitionStopped, (app::SpiderBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704940, SpiderBossDeathReactionBehaviour_OnTransitionStopped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::SpiderBossDeathReactionBehaviour * this_ptr))
} // namespace app::classes::SpiderBossDeathReactionBehaviour
