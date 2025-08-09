#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/WorldMapRemoveObjective.h>

namespace app::classes::WorldMapRemoveObjective {
    IL2CPP_REGISTER_METHOD(0x00582C00, void, Perform, app::WorldMapRemoveObjective* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::WorldMapRemoveObjective* this_ptr)
} // namespace app::classes::WorldMapRemoveObjective
