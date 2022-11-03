#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WorldMapCompleteObjective {
    IL2CPP_REGISTER_METHOD(0x00582C00, void, Perform, (app::WorldMapCompleteObjective * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WorldMapCompleteObjective * this_ptr))
} // namespace app::classes::WorldMapCompleteObjective
