#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetSoundCompositionAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SetSoundCompositionAction {
    IL2CPP_REGISTER_METHOD(0x005A4800, void, Perform, (app::SetSoundCompositionAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetSoundCompositionAction * this_ptr))
} // namespace app::classes::SetSoundCompositionAction
