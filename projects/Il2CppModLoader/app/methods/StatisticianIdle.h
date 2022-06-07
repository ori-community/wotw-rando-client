#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StatisticianIdle {
    IL2CPP_REGISTER_METHOD(0x009B7930, void, OnInitializeTask, (app::StatisticianIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009B7A90, void, OnEnterTask, (app::StatisticianIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009B7B50, app::BehaviourStatus__Enum, OnExecuteTask, (app::StatisticianIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009B8020, void, OnExitTask, (app::StatisticianIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::StatisticianIdle * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::StatisticianIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B8030, void, PlayTimeline, (app::StatisticianIdle * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x009B8250, void, ChangeState, (app::StatisticianIdle * this_ptr, app::StatisticianIdle_IdleStates__Enum state))
    IL2CPP_REGISTER_METHODINFO(0x0471CBA8, StatisticianIdle_ChangeState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009B83E0, void, OnTimelineFinished, (app::StatisticianIdle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705610, StatisticianIdle_OnTimelineFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009B87B0, void, ChangeToRandomState, (app::StatisticianIdle * this_ptr, app::StatisticianIdle_IdleStates__Enum__Array * states))
    IL2CPP_REGISTER_METHOD(0x009B7A90, void, SetupRandomState, (app::StatisticianIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B89B0, void, ResetIdle, (app::StatisticianIdle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B8AB0, void, ctor, (app::StatisticianIdle * this_ptr))
}
