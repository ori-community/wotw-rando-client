#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraCrossFadeManager.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade_CameraInformation.h>
#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::CameraCrossFadeManager {
    IL2CPP_REGISTER_METHOD(0x01687570, void, Awake, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01687720, void, Start, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016877F0, void, OnDestroy, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsCrossFading, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016879A0, void, OnGameReset, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047172F8, CameraCrossFadeManager_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01687A90, void, PerformCrossFade, (app::CameraCrossFadeManager * this_ptr, app::SceneMetaData* scene_meta_data, float cross_fade_duration))
    IL2CPP_REGISTER_METHOD(0x01687FB0, void, Apply, (app::CameraCrossFadeManager * this_ptr, app::UberPostProcessingCrossFade_CameraInformation* camera_information, app::CameraController_1* camera_controller))
    IL2CPP_REGISTER_METHOD(0x01688190, void, ApplyCrossFadeSettings, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01688280, void, FixedUpdate, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01688310, void, StopCrossFade, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (app::CameraCrossFadeManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF3C0, app::SuspendableMask__Enum, get_Mask, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016883F0, void, set_Mask, (app::CameraCrossFadeManager * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x016884A0, void, ctor, (app::CameraCrossFadeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016884B0, void, cctor, ())
} // namespace app::classes::CameraCrossFadeManager
