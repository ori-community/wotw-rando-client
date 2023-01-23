#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneDefaultSettingsHelper.h>
#include <Modloader/app/structs/SceneSettings.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SceneDefaultSettingsHelper {
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::SceneRoot*, get_CurrentToScene, (app::SceneDefaultSettingsHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::SceneRoot*, get_CurrentFromScene, (app::SceneDefaultSettingsHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::SceneSettings*, get_FromSettings, (app::SceneDefaultSettingsHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_FromSettings, (app::SceneDefaultSettingsHelper * this_ptr, app::SceneSettings* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::SceneSettings*, get_ToSettings, (app::SceneDefaultSettingsHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_ToSettings, (app::SceneDefaultSettingsHelper * this_ptr, app::SceneSettings* value))
    IL2CPP_REGISTER_METHOD(0x00938880, bool, get_HasFromSettings, (app::SceneDefaultSettingsHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00938890, bool, get_HasToSettings, (app::SceneDefaultSettingsHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009388A0, void, ctor, (app::SceneDefaultSettingsHelper * this_ptr, float duration, float disable_tween_speed_threshold))
    IL2CPP_REGISTER_METHOD(0x009388B0, void, Clear, (app::SceneDefaultSettingsHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009388D0, app::SceneRoot*, SceneRootFromPosition, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x009389D0, app::SceneRoot*, GetScene, (app::SceneDefaultSettingsHelper * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00938BF0, bool, CalculateTweenValueBasedOnPaddingZone, (app::SceneDefaultSettingsHelper * this_ptr, app::Vector3 position, float* value, app::SceneRoot** other_scene))
    IL2CPP_REGISTER_METHOD(0x009395D0, void, Advance, (app::SceneDefaultSettingsHelper * this_ptr, app::Vector3 position, float time_delta))
} // namespace app::classes::SceneDefaultSettingsHelper
