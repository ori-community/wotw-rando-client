#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/FrogDeathReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::FrogDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00A48970, void, SkipDeathTimeline, app::FrogDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016469C0, void, OnInitializeTask, app::FrogDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01646A80, void, OnEnterTask, app::FrogDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01646CB0, void, PlayTimeline, app::FrogDeathReactionBehaviour* this_ptr, app::MoonTimeline* timeline, app::Action* on_stop)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::FrogDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01646CE0, void, Explode, app::FrogDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01646ED0, void, ctor, app::FrogDeathReactionBehaviour* this_ptr)
} // namespace app::classes::FrogDeathReactionBehaviour
