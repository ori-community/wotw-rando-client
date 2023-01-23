#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PlayerStayInsideZoneTrigger {
    IL2CPP_REGISTER_METHOD(0x00886330, app::Rect, get_Bounds, (app::PlayerStayInsideZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142DFA0, bool, get_IsInside, (app::PlayerStayInsideZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142E110, bool, WillBeInside, (app::PlayerStayInsideZoneTrigger * this_ptr, float prediction_time))
    IL2CPP_REGISTER_METHOD(0x0142E340, bool, IsPositionInside, (app::PlayerStayInsideZoneTrigger * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0142E390, void, FixedUpdate, (app::PlayerStayInsideZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142E610, void, Awake, (app::PlayerStayInsideZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142E7E0, app::Vector3, GetSize, (app::PlayerStayInsideZoneTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0142EA60, void, ctor, (app::PlayerStayInsideZoneTrigger * this_ptr))
} // namespace app::classes::PlayerStayInsideZoneTrigger
