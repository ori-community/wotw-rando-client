#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LoadGameWithoutCheckpointRestoreAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::LoadGameWithoutCheckpointRestoreAction {
    IL2CPP_REGISTER_METHOD(0x00FB4940, void, Perform, (app::LoadGameWithoutCheckpointRestoreAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::LoadGameWithoutCheckpointRestoreAction * this_ptr))
} // namespace app::classes::LoadGameWithoutCheckpointRestoreAction
