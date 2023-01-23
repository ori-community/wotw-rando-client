#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SetBooleanAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::BehaviourSystem::SetBooleanAction {
    IL2CPP_REGISTER_METHOD(0x0300FFA0, app::String*, get_Info, (app::SetBooleanAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030102A0, app::String*, get_ChanceInfoString, (app::SetBooleanAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03010360, bool, OnExecute, (app::SetBooleanAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x03010520, void, ctor, (app::SetBooleanAction * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::SetBooleanAction
