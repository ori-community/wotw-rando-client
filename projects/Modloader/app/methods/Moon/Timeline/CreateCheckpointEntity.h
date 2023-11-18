#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateCheckpointEntity.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::CreateCheckpointEntity {
    IL2CPP_REGISTER_METHOD(0x00763BB0, void, OnStartPlayback, (app::CreateCheckpointEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00763BC0, void, ctor, (app::CreateCheckpointEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::CreateCheckpointEntity
