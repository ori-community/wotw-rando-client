#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AreaMapDebugNavigation {
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_DebugModeEnabled, (app::AreaMapDebugNavigation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050BCC0, void, Awake, (app::AreaMapDebugNavigation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050BD50, void, Advance, (app::AreaMapDebugNavigation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050C340, void, ToggleUndiscoveredMap, (app::AreaMapDebugNavigation * this_ptr, bool show))
    IL2CPP_REGISTER_METHOD(0x0050C3B0, void, ToggleDebugMode, (app::AreaMapDebugNavigation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050C3D0, void, EnterDebugMode, (app::AreaMapDebugNavigation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050C5B0, void, ExitDebugMode, (app::AreaMapDebugNavigation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050C730, void, UpdateSceneBoundsMarker, (app::AreaMapDebugNavigation * this_ptr, app::RuntimeSceneMetaData* scene_meta_data))
    IL2CPP_REGISTER_METHOD(0x0050CA70, void, ctor, (app::AreaMapDebugNavigation * this_ptr))
} // namespace app::classes::AreaMapDebugNavigation
