#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneSettings.h>
#include <Modloader/app/structs/SceneSettingsTransitionZone.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>

namespace app::classes::SceneSettingsTransitionZone {
    IL2CPP_REGISTER_METHOD(0x00BBF730, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::SceneSettings*, get_FromSettings, (app::SceneSettingsTransitionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::SceneSettings*, get_ToSettings, (app::SceneSettingsTransitionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BBF800, bool, get_IsReady, (app::SceneSettingsTransitionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BBF820, float, CalculateTweenValue, (app::SceneSettingsTransitionZone * this_ptr, app::Vector2 postion))
    IL2CPP_REGISTER_METHOD(0x00BBF9D0, void, UpdateSettings, (app::SceneSettingsTransitionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BBFEE0, void, OnEnable, (app::SceneSettingsTransitionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BC02C0, void, OnDisable, (app::SceneSettingsTransitionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060E860, bool, IsInside, (app::SceneSettingsTransitionZone * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::SelectableCategory__Enum, get_Category, (app::SceneSettingsTransitionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SceneSettingsTransitionZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BC03A0, void, cctor, ())
} // namespace app::classes::SceneSettingsTransitionZone
