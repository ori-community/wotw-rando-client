#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderIdle.h>

namespace app::classes::SpiderIdle {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::SpiderIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::SpiderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011BD380, void, PlayTimeline, app::SpiderIdle* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x011BD5A0, void, OnEnterTask, app::SpiderIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011BD5B0, void, OnExitTask, app::SpiderIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, app::SpiderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::SpiderIdle* this_ptr)
} // namespace app::classes::SpiderIdle
