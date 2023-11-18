#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadRemoveAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::LoadRemoveAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, (app::LoadRemoveAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::LoadRemoveAction * this_ptr))
} // namespace app::classes::LoadRemoveAction
