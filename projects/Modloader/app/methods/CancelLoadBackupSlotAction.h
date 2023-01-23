#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CancelLoadBackupSlotAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CancelLoadBackupSlotAction {
    IL2CPP_REGISTER_METHOD(0x00B22700, void, Perform, (app::CancelLoadBackupSlotAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CancelLoadBackupSlotAction * this_ptr))
} // namespace app::classes::CancelLoadBackupSlotAction
