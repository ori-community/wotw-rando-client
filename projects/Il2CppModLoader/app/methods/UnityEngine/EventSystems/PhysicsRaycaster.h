#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::EventSystems::PhysicsRaycaster {
    IL2CPP_REGISTER_METHOD(0x01F215C0, void, ctor, (app::PhysicsRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F21C90, app::Camera *, get_eventCamera, (app::PhysicsRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F21DA0, int32_t, get_depth, (app::PhysicsRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F21EE0, int32_t, get_finalEventMask, (app::PhysicsRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F22020, app::LayerMask, get_eventMask, (app::PhysicsRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_eventMask, (app::PhysicsRaycaster * this_ptr, app::LayerMask value))
    IL2CPP_REGISTER_METHOD(0x01F22030, int32_t, get_maxRayIntersections, (app::PhysicsRaycaster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_maxRayIntersections, (app::PhysicsRaycaster * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01F22040, bool, ComputeRayAndDistance, (app::PhysicsRaycaster * this_ptr, app::PointerEventData * event_data, app::Ray * ray, int32_t * event_display_index, float * distance_to_clip_plane))
    IL2CPP_REGISTER_METHOD(0x01F225E0, void, Raycast, (app::PhysicsRaycaster * this_ptr, app::PointerEventData * event_data, app::List_1_UnityEngine_EventSystems_RaycastResult_ * result_append_list))
    IL2CPP_REGISTER_METHOD(0x01F22CE0, int32_t, _Raycast_m__0, (app::RaycastHit r1, app::RaycastHit r2))
    IL2CPP_REGISTER_METHODINFO(0x04743C80, PhysicsRaycaster__Raycast_m__0__MethodInfo)
}
