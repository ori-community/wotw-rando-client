#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/EventSystem.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PointerEventData_InputButton__Enum.h>
#include <Modloader/app/structs/RaycastResult.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::EventSystems::PointerEventData {
    IL2CPP_REGISTER_METHOD(0x01F22D40, void, ctor, (app::PointerEventData * this_ptr, app::EventSystem* event_system))
    IL2CPP_REGISTER_METHOD(0x01704A60, app::GameObject*, get_pointerEnter, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_pointerEnter, (app::PointerEventData * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x01F22F90, app::GameObject*, get_lastPress, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_lastPress, (app::PointerEventData * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x01F1C1D0, app::GameObject*, get_rawPointerPress, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_rawPointerPress, (app::PointerEventData * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x01F1A590, app::GameObject*, get_pointerDrag, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_pointerDrag, (app::PointerEventData * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x01F22FA0, app::RaycastResult, get_pointerCurrentRaycast, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F22FE0, void, set_pointerCurrentRaycast, (app::PointerEventData * this_ptr, app::RaycastResult value))
    IL2CPP_REGISTER_METHOD(0x01F23010, app::RaycastResult, get_pointerPressRaycast, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F23050, void, set_pointerPressRaycast, (app::PointerEventData * this_ptr, app::RaycastResult value))
    IL2CPP_REGISTER_METHOD(0x01F23090, bool, get_eligibleForClick, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008496A0, void, set_eligibleForClick, (app::PointerEventData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F230A0, int32_t, get_pointerId, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBEA0, void, set_pointerId, (app::PointerEventData * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01F230B0, app::Vector2, get_position, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01466B40, void, set_position, (app::PointerEventData * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01F230D0, app::Vector2, get_delta, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F230F0, void, set_delta, (app::PointerEventData * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01F23120, app::Vector2, get_pressPosition, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F23140, void, set_pressPosition, (app::PointerEventData * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01F23170, app::Vector3, get_worldPosition, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F23190, void, set_worldPosition, (app::PointerEventData * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01F231B0, app::Vector3, get_worldNormal, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011607B0, void, set_worldNormal, (app::PointerEventData * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01F231D0, float, get_clickTime, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00510F80, void, set_clickTime, (app::PointerEventData * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01F231E0, int32_t, get_clickCount, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E30330, void, set_clickCount, (app::PointerEventData * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01F231F0, app::Vector2, get_scrollDelta, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F23210, void, set_scrollDelta, (app::PointerEventData * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01F23240, bool, get_useDragThreshold, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5F820, void, set_useDragThreshold, (app::PointerEventData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F23250, bool, get_dragging, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F23260, void, set_dragging, (app::PointerEventData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F23270, app::PointerEventData_InputButton__Enum, get_button, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D6500, void, set_button, (app::PointerEventData * this_ptr, app::PointerEventData_InputButton__Enum value))
    IL2CPP_REGISTER_METHOD(0x01F23280, bool, IsPointerMoving, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F232B0, bool, IsScrolling, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F232E0, app::Camera*, get_enterEventCamera, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F233D0, app::Camera*, get_pressEventCamera, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F234C0, app::GameObject*, get_pointerPress, (app::PointerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F234D0, void, set_pointerPress, (app::PointerEventData * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x01F235A0, app::String*, ToString, (app::PointerEventData * this_ptr))
} // namespace app::classes::UnityEngine::EventSystems::PointerEventData
