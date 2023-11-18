#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrabKickUpReactionBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CrabKickUpReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00DB6450, bool, get_ShouldSkipUpdate, (app::CrabKickUpReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB6460, void, OnEnterTask, (app::CrabKickUpReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00DB67A0, app::BehaviourStatus__Enum, OnExecuteTask, (app::CrabKickUpReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::CrabKickUpReactionBehaviour * this_ptr))
} // namespace app::classes::CrabKickUpReactionBehaviour
