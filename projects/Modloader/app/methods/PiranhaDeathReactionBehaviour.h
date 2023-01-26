#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PiranhaDeathReactionBehaviour.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::PiranhaDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0115DCC0, void, OnInitializeTask, (app::PiranhaDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0115DDB0, void, OnEnterTask, (app::PiranhaDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0115E2F0, app::BehaviourStatus__Enum, OnExecuteTask, (app::PiranhaDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0115E5B0, void, StartTimeline, (app::PiranhaDeathReactionBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_finnished))
    IL2CPP_REGISTER_METHOD(0x00B6AF60, void, EndReaction, (app::PiranhaDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115E5F0, void, ctor, (app::PiranhaDeathReactionBehaviour * this_ptr))
} // namespace app::classes::PiranhaDeathReactionBehaviour
