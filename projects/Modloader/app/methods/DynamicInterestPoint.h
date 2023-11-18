#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/CameraTargetType__Enum.h>
#include <Modloader/app/structs/DynamicInterestPoint.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::DynamicInterestPoint {
    IL2CPP_REGISTER_METHOD(0x00BEAB40, app::Vector3, get_EffectiveInterestDirection, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, ShouldShowInfluenceRadius, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074AB10, bool, ShouldShowInfluenceZone, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEADF0, void, Awake, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEAFB0, void, OnDestroy, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEB090, bool, get_CameraTargetActive, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEB140, app::Vector3, get_CameraTargetPosition, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEB430, app::Vector2, get_CameraTargetPadding, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEB450, app::Vector3, get_CameraInfluencePosition, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEB770, float, get_CameraInfluenceMinDist, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEB780, bool, IsValidTargetPosition, (app::DynamicInterestPoint * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x00BEB8F0, void, AdjustCameraTargetWeight, (app::DynamicInterestPoint * this_ptr, float* weight, app::CameraTargetData* data, app::Vector3 primary_target_position))
    IL2CPP_REGISTER_METHOD(0x00BEC040, float, get_CameraInfluenceMaxDist, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEC050, app::Vector2, get_CameraZoomFactor, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CameraTargetType__Enum, get_TargetType, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEC070, void, GetTargetData, (app::DynamicInterestPoint * this_ptr, app::CameraTargetData** data))
    IL2CPP_REGISTER_METHOD(0x00BEC160, void, OnSceneRootPostEnable, (app::DynamicInterestPoint * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00BEC240, void, OnSceneRootPreDisable, (app::DynamicInterestPoint * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00BEC320, bool, get_FOVInfluencerIsValid, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_FOVInfluencerWeight, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_FOVInfluencerOffset, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC510, float, get_FOVInfluencerTargetZ, (app::DynamicInterestPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEC400, void, ctor, (app::DynamicInterestPoint * this_ptr))
} // namespace app::classes::DynamicInterestPoint
