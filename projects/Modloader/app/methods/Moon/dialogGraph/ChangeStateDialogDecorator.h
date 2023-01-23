#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ChangeStateDialogDecorator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::dialogGraph::ChangeStateDialogDecorator {
    IL2CPP_REGISTER_METHOD(0x00F2C640, void, ExecuteDecorator, (app::ChangeStateDialogDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ChangeStateDialogDecorator * this_ptr))
} // namespace app::classes::Moon::dialogGraph::ChangeStateDialogDecorator
