#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShowWorldMapAction.h>

namespace app::classes::ShowWorldMapAction {
    IL2CPP_REGISTER_METHOD(0x00739780, void, Perform, app::ShowWorldMapAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ShowWorldMapAction* this_ptr)
} // namespace app::classes::ShowWorldMapAction
