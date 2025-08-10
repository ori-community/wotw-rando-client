#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/KwolokIdle.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::KwolokIdle {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::KwolokIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::KwolokIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012FB7B0, void, PlayTimeline, app::KwolokIdle* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x012FB9D0, void, OnEnterTask, app::KwolokIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x012FB9E0, void, OnExitTask, app::KwolokIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, app::KwolokIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::KwolokIdle* this_ptr)
} // namespace app::classes::KwolokIdle
