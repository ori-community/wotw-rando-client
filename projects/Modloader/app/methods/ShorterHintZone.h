#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShorterHintZone.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::ShorterHintZone {
    IL2CPP_REGISTER_METHOD(0x005C3A20, bool, get_IsInside, ())
    IL2CPP_REGISTER_METHOD(0x005C3C90, void, Awake, (app::ShorterHintZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C3E60, void, OnEnable, (app::ShorterHintZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C3F20, void, OnDisable, (app::ShorterHintZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C3FE0, app::Rect, get_Bounds, (app::ShorterHintZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ShorterHintZone * this_ptr))
} // namespace app::classes::ShorterHintZone
