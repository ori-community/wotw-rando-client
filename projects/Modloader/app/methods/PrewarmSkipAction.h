#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PrewarmSkipAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PrewarmSkipAction {
    IL2CPP_REGISTER_METHOD(0x00C738A0, void, Perform, (app::PrewarmSkipAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PrewarmSkipAction * this_ptr))
} // namespace app::classes::PrewarmSkipAction
