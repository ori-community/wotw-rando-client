#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicCameraTargetting.h>
#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/CameraTargetSettings.h>
#include <Modloader/app/structs/GlobalBrightnessController_BrigthnessContributionOrder__Enum.h>
#include <Modloader/app/structs/ICameraTarget.h>
#include <Modloader/app/structs/List_1_Moon_CameraTargetSettings_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::DynamicCameraTargetting {
    IL2CPP_REGISTER_METHOD(0x01202300, bool, get_Bypass, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202310, void, set_Bypass, (app::DynamicCameraTargetting * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01202320, bool, get_IsActive, ())
    IL2CPP_REGISTER_METHOD(0x01202540, bool, get_OnlyUseDynamicWithEnemies, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202550, void, set_OnlyUseDynamicWithEnemies, (app::DynamicCameraTargetting * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01202560, bool, get_IsSuspended, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202570, void, set_IsSuspended, (app::DynamicCameraTargetting * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01202580, app::SuspendableMask__Enum, get_Mask, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202590, void, set_Mask, (app::DynamicCameraTargetting * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x012025A0, bool, get_FOVInfluencerIsValid, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012025B0, float, get_FOVInfluencerWeight, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012025C0, float, get_FOVInfluencerOffset, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012025E0, float, get_FOVInfluencerTargetZ, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202600, float, get_FOVMultiplier, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202610, void, set_FOVMultiplier, (app::DynamicCameraTargetting * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01202620, void, Awake, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202980, void, OnDestroy, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202CC0, void, OnDisable, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202CF0, void, ResetCamera, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202F40, void, OnRestoreCheckpoint, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202F40, void, OnGameReset, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01202F50, void, AdjustCameraTargetWeightForLeashHooks, (float* weight, app::ICameraTarget* target, app::CameraTargetData* data, app::Vector3 primary_target_position))
    IL2CPP_REGISTER_METHOD(0x01203150, void, Activate, (app::DynamicCameraTargetting * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x012037F0, void, Deactivate, (app::DynamicCameraTargetting * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x01203BF0, app::Rect, GetRect, (app::DynamicCameraTargetting * this_ptr, app::CameraTargetSettings setting, app::Vector3 primary_target_position))
    IL2CPP_REGISTER_METHOD(0x0111EBE0, app::Vector3, GetTargetPos, (app::DynamicCameraTargetting * this_ptr, app::CameraTargetSettings setting))
    IL2CPP_REGISTER_METHOD(0x01203DA0, app::Rect, BoundingRectangle, (app::DynamicCameraTargetting * this_ptr, app::List_1_UnityEngine_Rect_* rects))
    IL2CPP_REGISTER_METHOD(0x012040D0, void, FixedUpdate, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01204130, void, MoveToTargetInstantly, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012041E0, void, UpdateTargetting, (app::DynamicCameraTargetting * this_ptr, float delta_time, bool instant))
    IL2CPP_REGISTER_METHOD(0x01205470, void, DebugDrawTargets, (app::DynamicCameraTargetting * this_ptr, app::List_1_Moon_CameraTargetSettings_* provided_targets))
    IL2CPP_REGISTER_METHOD(0x01205620, void, DebugDrawCamera, (app::DynamicCameraTargetting * this_ptr, app::Rect bounding_rect, app::Rect padded_rect, app::Rect debug_res, app::Rect cover, app::Rect resultant_rect, app::Vector2 target_pos))
    IL2CPP_REGISTER_METHOD(0x01205820, void, PropagateWeightToLayers, (app::DynamicCameraTargetting * this_ptr, float target_weight, float delta_time, bool instant))
    IL2CPP_REGISTER_METHOD(0x012059F0, void, AdjustDarkness, (app::DynamicCameraTargetting * this_ptr, float target_brightness_weight, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01205B20, void, AdjustFOV, (app::DynamicCameraTargetting * this_ptr, float target_f_o_v_weight, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01205D50, void, FillRectsFromTargets, (app::DynamicCameraTargetting * this_ptr, app::List_1_Moon_CameraTargetSettings_* provided_targets, app::CameraTargetSettings primary_target))
    IL2CPP_REGISTER_METHOD(0x012060B0, void, DebugDrawCameraRectangle, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012066A0, float, get_HDRBrightnessInfluceMultiplier, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012067A0, float, get_BrightnessInfluceAdditive, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B550, float, get_BrightnessInfluceMultiplicative, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012067D0, bool, get_ContributeToAdditive, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00658AB0, bool, get_ContributeToMultiplicative, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012067F0, float, get_BrightnessInfluceWeight, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GlobalBrightnessController_BrigthnessContributionOrder__Enum, get_BrightnessInfluceOrder, (app::DynamicCameraTargetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01206910, void, ctor, (app::DynamicCameraTargetting * this_ptr))
} // namespace app::classes::Moon::DynamicCameraTargetting
