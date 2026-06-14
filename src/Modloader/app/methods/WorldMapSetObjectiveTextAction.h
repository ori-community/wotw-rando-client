#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/WorldMapSetObjectiveTextAction.h>

namespace app::classes::WorldMapSetObjectiveTextAction {
    IL2CPP_REGISTER_METHOD(0x00585170, void, Perform, app::WorldMapSetObjectiveTextAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::WorldMapSetObjectiveTextAction* this_ptr)
} // namespace app::classes::WorldMapSetObjectiveTextAction
