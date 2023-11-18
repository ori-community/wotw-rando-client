#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MarkActiveScenesAsCheckpointKeepLoaded.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::MarkActiveScenesAsCheckpointKeepLoaded {
    IL2CPP_REGISTER_METHOD(0x00A0FD50, void, Perform, (app::MarkActiveScenesAsCheckpointKeepLoaded * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::MarkActiveScenesAsCheckpointKeepLoaded * this_ptr))
} // namespace app::classes::MarkActiveScenesAsCheckpointKeepLoaded
