#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetIntAction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::SetIntAction {
    IL2CPP_REGISTER_METHOD(0x03010BF0, app::String*, get_Info, app::SetIntAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03010EC0, bool, OnExecute, app::SetIntAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, app::SetIntAction* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::SetIntAction
