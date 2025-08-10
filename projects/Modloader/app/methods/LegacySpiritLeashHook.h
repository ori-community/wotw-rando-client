#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/CameraTargetType__Enum.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/LegacySpiritLeashHook.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LegacySpiritLeashHook {
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_Activated, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_Activated, app::LegacySpiritLeashHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A35C30, float, get_OriCloseEnoughDistance, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDecelerateOnApproach, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_CanBeSustained, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35C40, app::Vector3, get_Position, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35DD0, bool, CanBeSpiritLeashed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF3C0, app::SpiritLeashMode__Enum, get_LeashInteractionMode, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SpiritLeashCost, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_StressTested, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35F20, void, set_StressTested, app::LegacySpiritLeashHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A35F30, float, ISpiritLeashAttackable_get_PositionOffset, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Transform*, get_HookTargetTransform, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00575450, bool, get_IsHookHorizontal, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00575460, void, set_IsHookHorizontal, app::LegacySpiritLeashHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00575470, bool, get_IsHookSticky, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00575480, void, set_IsHookSticky, app::LegacySpiritLeashHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Transform*, get_HookTransform, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35F40, app::Transform*, ISpiritLeashHook_get_HookTargetTransform, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashHighlight, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashDehighlight, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35F60, void, OnSpiritLeashed, app::LegacySpiritLeashHook* this_ptr, app::Vector3 player_position, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x00A36280, void, Awake, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A36540, void, OnCameraFrustumSuspended, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A365E0, void, OnCameraFrustumResumed, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A36740, void, OnEnable, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A36A80, void, OnDisable, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A36DC0, void, OnDestroy, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::LegacySpiritLeashHook* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00A36E60, void, Deactivate, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A36E70, void, Reactivate, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A36E80, bool, CreepBlocked, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CameraTargetActive, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A36FB0, app::Vector3, get_CameraTargetPosition, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A37150, app::Vector2, get_CameraTargetPadding, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A37200, app::Vector3, get_CameraInfluencePosition, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FDB90, float, get_CameraTargetWeight, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A37230, void, set_CameraTargetWeight, app::LegacySpiritLeashHook* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00A37240, float, get_CameraInfluenceMinDist, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A372E0, app::Vector2, get_CameraZoomFactor, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::CameraTargetType__Enum, get_TargetType, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A37300, void, GetTargetData, app::LegacySpiritLeashHook* this_ptr, app::CameraTargetData** data)
    IL2CPP_REGISTER_METHOD(
        0x00A37560,
        void,
        AdjustCameraTargetWeight,
        app::LegacySpiritLeashHook* this_ptr,
        float* weight,
        app::CameraTargetData* data,
        app::Vector3 primary_target_position
    )
    IL2CPP_REGISTER_METHOD(0x00A375A0, float, get_CameraInfluenceMaxDist, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A37640, void, OnSceneRootPostEnable, app::LegacySpiritLeashHook* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x00A376E0, void, OnSceneRootPreDisable, app::LegacySpiritLeashHook* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::IDamageReciever__Array*, get_AffectedReceivers, app::LegacySpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A37780, void, ctor, app::LegacySpiritLeashHook* this_ptr)
} // namespace app::classes::LegacySpiritLeashHook
