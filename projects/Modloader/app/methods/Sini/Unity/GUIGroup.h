#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GUIGroup__Boxed.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/GUIGroup.h>

namespace app::classes::Sini::Unity::GUIGroup {
    IL2CPP_REGISTER_METHOD(0x00246DC0, void, ctor, (app::GUIGroup__Boxed * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x031155D0, app::GUIGroup, Push, (app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x00246DE0, void, Dispose, (app::GUIGroup__Boxed * this_ptr))
} // namespace app::classes::Sini::Unity::GUIGroup
