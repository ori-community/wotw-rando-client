#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneDeletionFlags__Enum.h>

namespace app::classes::Moon::EditorTools::SceneTracking::SceneDeletionExtension {
    IL2CPP_REGISTER_METHOD(0x012083D0, app::SceneDeletionFlags__Enum, Add, app::SceneDeletionFlags__Enum me, app::SceneDeletionFlags__Enum to_add)
    IL2CPP_REGISTER_METHOD(0x012083E0, app::SceneDeletionFlags__Enum, Remove, app::SceneDeletionFlags__Enum me, app::SceneDeletionFlags__Enum to_remove)
    IL2CPP_REGISTER_METHOD(0x00CD0C30, bool, HasFlags, app::SceneDeletionFlags__Enum me, app::SceneDeletionFlags__Enum to_check)
    IL2CPP_REGISTER_METHOD(0x012083F0, int32_t, GetActiveFlagsCount, app::SceneDeletionFlags__Enum me)
} // namespace app::classes::Moon::EditorTools::SceneTracking::SceneDeletionExtension
