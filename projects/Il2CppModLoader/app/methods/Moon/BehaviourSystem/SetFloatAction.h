#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::SetFloatAction {
    IL2CPP_REGISTER_METHOD(0x03010540, app::String*, get_Info, (app::SetFloatAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03010810, bool, OnExecute, (app::SetFloatAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, (app::SetFloatAction * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::SetFloatAction
