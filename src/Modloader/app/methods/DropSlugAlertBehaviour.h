#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DropSlugAlertBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::DropSlugAlertBehaviour {
    IL2CPP_REGISTER_METHOD(0x00BE0A40, void, OnEnter, app::DropSlugAlertBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00BE0C20, void, PlayAlertLoop, app::DropSlugAlertBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE0C50, void, OnExit, app::DropSlugAlertBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecute, app::DropSlugAlertBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00BE0E50, void, PlayTimeline, app::DropSlugAlertBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00BE0E80, void, ctor, app::DropSlugAlertBehaviour* this_ptr)
} // namespace app::classes::DropSlugAlertBehaviour
