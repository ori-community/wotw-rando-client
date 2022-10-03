#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::RectTransformUtility {
    IL2CPP_REGISTER_METHOD(0x031A6C20, bool, RectangleContainsScreenPoint, (app::RectTransform * rect, app::Vector2 screen_point, app::Camera* cam))
    IL2CPP_REGISTER_METHOD(0x031A6DA0, bool, ScreenPointToWorldPointInRectangle, (app::RectTransform * rect, app::Vector2 screen_point, app::Camera* cam, app::Vector3* world_point))
    IL2CPP_REGISTER_METHOD(0x031A7090, bool, ScreenPointToLocalPointInRectangle, (app::RectTransform * rect, app::Vector2 screen_point, app::Camera* cam, app::Vector2* local_point))
    IL2CPP_REGISTER_METHOD(0x031A7280, app::Ray, ScreenPointToRay, (app::Camera * cam, app::Vector2 screen_pos))
    IL2CPP_REGISTER_METHOD(0x031A7500, app::Vector2, WorldToScreenPoint, (app::Camera * cam, app::Vector3 world_point))
    IL2CPP_REGISTER_METHOD(0x031A76A0, void, FlipLayoutOnAxis, (app::RectTransform * rect, int32_t axis, bool keep_positioning, bool recursive))
    IL2CPP_REGISTER_METHOD(0x031A79D0, void, FlipLayoutAxes, (app::RectTransform * rect, bool keep_positioning, bool recursive))
    IL2CPP_REGISTER_METHOD(0x031A7CD0, app::Vector2, GetTransposed, (app::Vector2 input))
    IL2CPP_REGISTER_METHOD(0x031A7CF0, app::Vector2, PixelAdjustPoint, (app::Vector2 point, app::Transform* element_transform, app::Canvas* canvas))
    IL2CPP_REGISTER_METHOD(0x031A7DF0, app::Rect, PixelAdjustRect, (app::RectTransform * rect_transform, app::Canvas* canvas))
    IL2CPP_REGISTER_METHOD(0x031A7F00, bool, PointInRectangle, (app::Vector2 screen_point, app::RectTransform* rect, app::Camera* cam))
    IL2CPP_REGISTER_METHOD(0x031A7FF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x031A8080, void, PixelAdjustPoint_Injected, (app::Vector2 * point, app::Transform* element_transform, app::Canvas* canvas, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x031A8100, void, PixelAdjustRect_Injected, (app::RectTransform * rect_transform, app::Canvas* canvas, app::Rect* ret))
    IL2CPP_REGISTER_METHOD(0x031A8170, bool, PointInRectangle_Injected, (app::Vector2 * screen_point, app::RectTransform* rect, app::Camera* cam))
} // namespace app::classes::UnityEngine::RectTransformUtility
