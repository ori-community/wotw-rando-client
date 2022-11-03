#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::SetVector3Action {
    IL2CPP_REGISTER_METHOD(0x03011130, app::String*, get_Info, (app::SetVector3Action * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03011400, bool, OnExecute, (app::SetVector3Action * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, (app::SetVector3Action * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::SetVector3Action
