#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MusicAction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MusicAction {
    IL2CPP_REGISTER_METHOD(0x0087DD00, void, Perform, app::MusicAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0087DDE0, app::String*, GetNiceName, app::MusicAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::MusicAction* this_ptr)
} // namespace app::classes::MusicAction
