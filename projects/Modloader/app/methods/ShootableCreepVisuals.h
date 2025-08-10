#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShootableCreepVisuals.h>

namespace app::classes::ShootableCreepVisuals {
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_InvalidateParentTimelineCache, app::ShootableCreepVisuals* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_InvalidateParentTimelineCache, app::ShootableCreepVisuals* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x005BA930, void, HideVisuals, app::ShootableCreepVisuals* this_ptr, bool hide)
    IL2CPP_REGISTER_METHOD(0x005BAAD0, void, ctor, app::ShootableCreepVisuals* this_ptr)
} // namespace app::classes::ShootableCreepVisuals
