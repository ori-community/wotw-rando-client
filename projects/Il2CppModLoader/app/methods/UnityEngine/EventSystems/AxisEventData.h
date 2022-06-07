#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::AxisEventData {
    IL2CPP_REGISTER_METHOD(0x01F19AE0, void, ctor, (app::AxisEventData * this_ptr, app::EventSystem * event_system))
    IL2CPP_REGISTER_METHOD(0x01F19BB0, app::Vector2, get_moveVector, (app::AxisEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E71250, void, set_moveVector, (app::AxisEventData * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01F19BD0, app::MoveDirection__Enum, get_moveDir, (app::AxisEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_moveDir, (app::AxisEventData * this_ptr, app::MoveDirection__Enum value))
}
