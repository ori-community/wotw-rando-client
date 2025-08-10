#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/CameraTargetType__Enum.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SpiritLeashHook.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritLeashHook {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_Activated, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_Activated, app::SpiritLeashHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A35C30, float, get_OriCloseEnoughDistance, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDecelerateOnApproach, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_CanBeSustained, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5EAB0, app::Vector3, get_Position, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeSpiritLeashed, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::SpiritLeashMode__Enum, get_LeashInteractionMode, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SpiritLeashCost, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00615270, bool, get_StressTested, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00674DC0, void, set_StressTested, app::SpiritLeashHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004994E0, float, ISpiritLeashAttackable_get_PositionOffset, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Transform*, get_HookTargetTransform, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsHookHorizontal, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsHookHorizontal, app::SpiritLeashHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_IsHookSticky, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C15D0, void, set_IsHookSticky, app::SpiritLeashHook* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Transform*, get_HookTransform, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5EC40, app::Transform*, ISpiritLeashHook_get_HookTargetTransform, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashHighlight, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashDehighlight, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashed, app::SpiritLeashHook* this_ptr, app::Vector3 player_position, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x00D5EC60, void, Awake, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5EEF0, void, OnEnable, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5F220, void, OnDisable, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5F550, void, Deactivate, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5F560, void, Reactivate, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5F570, void, OnDestroy, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CameraTargetActive, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5F620, app::Vector3, get_CameraTargetPosition, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5F780, app::Vector2, get_CameraTargetPadding, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5F830, app::Vector3, get_CameraInfluencePosition, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00623240, float, get_CameraTargetWeight, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00623250, void, set_CameraTargetWeight, app::SpiritLeashHook* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D5F860, float, get_CameraInfluenceMinDist, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A372E0, app::Vector2, get_CameraZoomFactor, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::CameraTargetType__Enum, get_TargetType, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5F900, void, GetTargetData, app::SpiritLeashHook* this_ptr, app::CameraTargetData** data)
    IL2CPP_REGISTER_METHOD(
        0x00A37560,
        void,
        AdjustCameraTargetWeight,
        app::SpiritLeashHook* this_ptr,
        float* weight,
        app::CameraTargetData* data,
        app::Vector3 primary_target_position
    )
    IL2CPP_REGISTER_METHOD(0x00D5FB60, float, get_CameraInfluenceMaxDist, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5FC00, void, OnSceneRootPostEnable, app::SpiritLeashHook* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x00D5FCB0, void, OnSceneRootPreDisable, app::SpiritLeashHook* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::IDamageReciever__Array*, get_AffectedReceivers, app::SpiritLeashHook* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5FD60, void, ctor, app::SpiritLeashHook* this_ptr)
} // namespace app::classes::SpiritLeashHook
