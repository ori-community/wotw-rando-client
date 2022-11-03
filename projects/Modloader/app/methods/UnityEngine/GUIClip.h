#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::GUIClip {
    IL2CPP_REGISTER_METHOD(0x029E2440, app::Rect, get_visibleRect, ())
    IL2CPP_REGISTER_METHOD(0x029E24B0, void, Internal_Push, (app::Rect screen_rect, app::Vector2 scroll_offset, app::Vector2 render_offset, bool reset_offset))
    IL2CPP_REGISTER_METHOD(0x029E2530, void, Internal_Pop, ())
    IL2CPP_REGISTER_METHOD(0x029E2580, app::Vector2, Unclip_Vector2, (app::Vector2 pos))
    IL2CPP_REGISTER_METHOD(0x029D9F60, app::Matrix4x4, GetMatrix, ())
    IL2CPP_REGISTER_METHOD(0x029E25F0, void, SetMatrix, (app::Matrix4x4 m))
    IL2CPP_REGISTER_METHOD(0x029E2640, void, Push, (app::Rect screen_rect, app::Vector2 scroll_offset, app::Vector2 render_offset, bool reset_offset))
    IL2CPP_REGISTER_METHOD(0x029E2530, void, Pop, ())
    IL2CPP_REGISTER_METHOD(0x029E26C0, app::Vector2, Unclip, (app::Vector2 pos))
    IL2CPP_REGISTER_METHOD(0x029E2730, void, get_visibleRect_Injected, (app::Rect * ret))
    IL2CPP_REGISTER_METHOD(0x029E2780, void, Internal_Push_Injected, (app::Rect * screen_rect, app::Vector2* scroll_offset, app::Vector2* render_offset, bool reset_offset))
    IL2CPP_REGISTER_METHOD(0x029E2810, void, Unclip_Vector2_Injected, (app::Vector2 * pos, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x029E2870, void, GetMatrix_Injected, (app::Matrix4x4 * ret))
    IL2CPP_REGISTER_METHOD(0x029E28C0, void, SetMatrix_Injected, (app::Matrix4x4 * m))
} // namespace app::classes::UnityEngine::GUIClip
