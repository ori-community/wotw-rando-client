#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameMapTransitionManager.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::GameMapTransitionManager {
    IL2CPP_REGISTER_METHOD(0x006A40E0, bool, get_IsTransitioning, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A4110, bool, get_InWorldMapMode, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A41C0, bool, get_InAreaMapMode, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A41D0, void, Awake, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A4480, void, OnDestroy, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_ZoomTime, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45B0, float, get_ZoomDelta, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45C0, bool, get_IsZoomingIn, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A45E0, bool, get_IsZoomingOut, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A4600, bool, get_CanZoomOutToWorldMap, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A4610, void, set_CanZoomOutToWorldMap, (app::GameMapTransitionManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_ForbidWorldMapUntilClose, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_ForbidWorldMapUntilClose, (app::GameMapTransitionManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006A4640, void, ZoomToWorldMap, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A46B0, void, ZoomToAreaMap, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A4710, void, OnDisable, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A4760, void, Update, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A4890, void, Advance, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5050, void, GoToWorldMap, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5270, void, GoToAreaMap, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5450, void, FadeAreaMapIn, (app::GameMapTransitionManager * this_ptr, float delay))
    IL2CPP_REGISTER_METHOD(0x006A56E0, void, FadeAreaMapOut, (app::GameMapTransitionManager * this_ptr, float delay))
    IL2CPP_REGISTER_METHOD(0x006A5A50, void, GoToAreaMapInstantly, (app::GameMapTransitionManager * this_ptr, bool set_menu_audio_state))
    IL2CPP_REGISTER_METHOD(0x006A5B40, void, ResetToAreaMap, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5CC0, void, DisableAndEnableNextFrame, (app::GameMapTransitionManager * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x006A5DC0, void, EnableAndDisableNextFrame, (app::GameMapTransitionManager * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, SetAreaMapZoom, (app::GameMapTransitionManager * this_ptr, float zoom))
    IL2CPP_REGISTER_METHOD(0x006A5ED0, void, HandleLocationAndZoomRetention, (app::GameMapTransitionManager * this_ptr, bool retain_zoom_and_location))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GoToWorldMapInstantly, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A6000, void, ctor, (app::GameMapTransitionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A6310, void, cctor, ())
} // namespace app::classes::GameMapTransitionManager
