#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RectangleGameplayZone {
    IL2CPP_REGISTER_METHOD(0x008FB270, bool, ContainsPoint, (app::RectangleGameplayZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x008FB2B0, app::Rect, get_EditorBounds, (app::RectangleGameplayZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FB520, void, set_EditorBounds, (app::RectangleGameplayZone * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x008FB720, void, OnZoneChange, (app::RectangleGameplayZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FB810, void, RefreshBounds, (app::RectangleGameplayZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::RectangleGameplayZone * this_ptr))
} // namespace app::classes::RectangleGameplayZone
