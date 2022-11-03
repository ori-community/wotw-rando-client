#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ReverseSceneLoadingZone {
    IL2CPP_REGISTER_METHOD(0x00910830, app::SceneRoot*, get_SceneRoot, (app::ReverseSceneLoadingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910920, app::Rect, get_Rectangle, (app::ReverseSceneLoadingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::SelectableCategory__Enum, get_Category, (app::ReverseSceneLoadingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ReverseSceneLoadingZone * this_ptr))
} // namespace app::classes::ReverseSceneLoadingZone
