#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HornBugFallReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HornBugFallReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00B6B0D0, void, OnExitTask, (app::HornBugFallReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00733FD0, void, ctor, (app::HornBugFallReactionBehaviour * this_ptr))
} // namespace app::classes::HornBugFallReactionBehaviour
