#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PerformSkipAction.h>

namespace app::classes::PerformSkipAction {
    IL2CPP_REGISTER_METHOD(0x0044CDF0, void, Perform, app::PerformSkipAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::PerformSkipAction* this_ptr)
} // namespace app::classes::PerformSkipAction
