#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::GraphicRaycaster {
    IL2CPP_REGISTER_METHOD(0x024B1F60, void, ctor, (app::GraphicRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B20C0, int32_t, get_sortOrderPriority, (app::GraphicRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B21A0, int32_t, get_renderOrderPriority, (app::GraphicRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_ignoreReversedGraphics, (app::GraphicRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_ignoreReversedGraphics, (app::GraphicRaycaster * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F30530, app::GraphicRaycaster_BlockingObjects__Enum, get_blockingObjects, (app::GraphicRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_blockingObjects, (app::GraphicRaycaster * this_ptr, app::GraphicRaycaster_BlockingObjects__Enum value))
    IL2CPP_REGISTER_METHOD(0x024B22E0, app::Canvas *, get_canvas, (app::GraphicRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B23B0, void, Raycast_1, (app::GraphicRaycaster * this_ptr, app::PointerEventData * event_data, app::List_1_UnityEngine_EventSystems_RaycastResult_ * result_append_list))
    IL2CPP_REGISTER_METHOD(0x024B35C0, app::Camera *, get_eventCamera, (app::GraphicRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B3880, void, Raycast_2, (app::Canvas * canvas, app::Camera * event_camera, app::Vector2 pointer_position, app::IList_1_UnityEngine_UI_Graphic_ * found_graphics, app::List_1_UnityEngine_UI_Graphic_ * results))
    IL2CPP_REGISTER_METHOD(0x024B3ED0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x024B4020, int32_t, _Raycast_m__0, (app::Graphic * g1, app::Graphic * g2))
    IL2CPP_REGISTER_METHODINFO(0x0473D120, GraphicRaycaster__Raycast_m__0__MethodInfo)
}
