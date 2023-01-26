#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/FindClosestSandEdgeToTargetAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::FindClosestSandEdgeToTargetAction {
    IL2CPP_REGISTER_METHOD(0x01222F70, app::String*, get_Info, (app::FindClosestSandEdgeToTargetAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01223010, bool, OnExecute, (app::FindClosestSandEdgeToTargetAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01223970, void, ctor, (app::FindClosestSandEdgeToTargetAction * this_ptr))
} // namespace app::classes::Moon::FindClosestSandEdgeToTargetAction
