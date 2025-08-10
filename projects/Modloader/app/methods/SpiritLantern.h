#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraTargetData.h>
#include <Modloader/app/structs/CameraTargetType__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SpiritLantern.h>
#include <Modloader/app/structs/SpiritLeashMode__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritLantern {
    IL2CPP_REGISTER_METHOD(0x0057A580, bool, get_Activated, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D59890, void, set_Activated, app::SpiritLantern* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D59910, app::Color, get_OuterGlowColor, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D59A80, void, set_OuterGlowColor, app::SpiritLantern* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x00D59BC0, app::Color, get_SparkParticlesColor, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D59D20, void, set_SparkParticlesColor, app::SpiritLantern* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x00C7C010, app::Vector3, get_Position, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057A580, bool, CanBeBashed, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, CanBeSpiritLeashed, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::SpiritLeashMode__Enum, get_LeashInteractionMode, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A35C30, float, get_OriCloseEnoughDistance, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDecelerateOnApproach, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByHammerHandle, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D59EB0, void, OnBashHighlight, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5A070, void, OnBashDehighlight, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5A0A0, int32_t, get_BashPriority, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5A0B0, void, OnRecieveDamage, app::SpiritLantern* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SpiritLeashCost, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_PositionOffset, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::Transform*, get_HookTargetTransform, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashHighlight, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashDehighlight, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeashed, app::SpiritLantern* this_ptr, app::Vector3 player_position, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x00D5A320, void, Awake, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5A600, void, OnEnable, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5A6A0, void, OnDisable, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5A740, void, OnDestroy, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5A7E0, void, Start, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5AAC0, void, FixedUpdate, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5AAD0, void, UpdateHighlightColor, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CameraTargetActive, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5AF20, app::Vector3, get_CameraTargetPosition, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5B0C0, app::Vector2, get_CameraTargetPadding, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5B170, app::Vector3, get_CameraInfluencePosition, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5D50, float, get_CameraTargetWeight, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C5D60, void, set_CameraTargetWeight, app::SpiritLantern* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D5B1A0, float, get_CameraInfluenceMinDist, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A372E0, app::Vector2, get_CameraZoomFactor, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::CameraTargetType__Enum, get_TargetType, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5B240, void, GetTargetData, app::SpiritLantern* this_ptr, app::CameraTargetData** data)
    IL2CPP_REGISTER_METHOD(
        0x00D5B4A0,
        void,
        AdjustCameraTargetWeight,
        app::SpiritLantern* this_ptr,
        float* weight,
        app::CameraTargetData* data,
        app::Vector3 primary_target_position
    )
    IL2CPP_REGISTER_METHOD(0x00D5B6A0, float, get_CameraInfluenceMaxDist, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5B740, void, OnSceneRootPostEnable, app::SpiritLantern* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x00D5B7E0, void, OnSceneRootPreDisable, app::SpiritLantern* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::IDamageReciever__Array*, get_AffectedReceivers, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D5B880, void, ctor, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::SpiritLantern* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::SpiritLantern* this_ptr)
} // namespace app::classes::SpiritLantern
