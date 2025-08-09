#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/RestoreCheckpointAnimatorEntity.h>

namespace app::classes::RestoreCheckpointAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x0090B740, void, OnStartPlayback, app::RestoreCheckpointAnimatorEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0090B7F0, void, ctor, app::RestoreCheckpointAnimatorEntity* this_ptr)
} // namespace app::classes::RestoreCheckpointAnimatorEntity
