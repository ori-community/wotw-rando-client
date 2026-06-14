#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/BuilderEntity.h>
#include <Modloader/app/structs/BuilderIdle.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::BuilderIdle {
    IL2CPP_REGISTER_METHOD(0x00816A70, app::BuilderEntity*, get_m_builder, app::BuilderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsOnground, app::BuilderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00816B50, void, Awake, app::BuilderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00816D00, void, OnDestroy, app::BuilderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00816EB0, void, LeftTree, app::BuilderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::BuilderIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::BuilderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00816F90, void, PlayTimeline, app::BuilderIdle* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x008172F0, void, OnEnterTask, app::BuilderIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00817410, void, OnExitTask, app::BuilderIdle* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimelineFinished, app::BuilderIdle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::BuilderIdle* this_ptr)
} // namespace app::classes::BuilderIdle
