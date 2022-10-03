#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::SetGameObjectAction {
    IL2CPP_REGISTER_METHOD(0x03010A50, app::String*, get_Info, (app::SetGameObjectAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03010B10, bool, OnExecute, (app::SetGameObjectAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, (app::SetGameObjectAction * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::SetGameObjectAction
