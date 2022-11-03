#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ResetPathFollowerToNode {
    IL2CPP_REGISTER_METHOD(0x00904D90, void, Perform, (app::ResetPathFollowerToNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00904F00, app::String*, get_TargetName, (app::ResetPathFollowerToNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00904FE0, app::String*, GetNiceName, (app::ResetPathFollowerToNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ResetPathFollowerToNode * this_ptr))
} // namespace app::classes::ResetPathFollowerToNode
