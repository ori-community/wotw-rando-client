#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/AnimationSwapSet.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/Input_Command__Enum.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone.h>
#include <Modloader/app/structs/SeinAbilityRestrictZoneMask__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>

namespace app::classes::SeinAbilityRestrictZone {
    IL2CPP_REGISTER_METHOD(0x00D7FEE0, app::SeinAbilityRestrictZoneMask__Enum, get_Mask, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_Mask, app::SeinAbilityRestrictZone* this_ptr, app::SeinAbilityRestrictZoneMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00D7FFC0, bool, IsInside_1, app::AbilityType__Enum ability, app::SeinAbilityRestrictZoneMask__Enum restrict_mask)
    IL2CPP_REGISTER_METHOD(0x00D800C0, bool, IsInside_2, app::Input_Command__Enum button, app::SeinAbilityRestrictZoneMask__Enum restrict_mask)
    IL2CPP_REGISTER_METHOD(0x00D80190, app::SeinAbilityRestrictZoneMask__Enum, GetCurrentRestrictMask, )
    IL2CPP_REGISTER_METHOD(0x00D80520, bool, IsInside_3, app::SeinAbilityRestrictZoneMask__Enum restrict_mask)
    IL2CPP_REGISTER_METHOD(0x00D80A60, app::CharacterGravity*, get_Gravity, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D80B90, app::CharacterLeftRightMovement*, get_LeftRightMovement, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D80CC0, app::PlatformMovement*, get_PlatformMovement, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D80DF0, void, SetSubscriptionToSeinEvents, app::SeinAbilityRestrictZone* this_ptr, bool subscribe)
    IL2CPP_REGISTER_METHOD(0x00D815F0, void, SetSubscriptionToKuEvents, app::SeinAbilityRestrictZone* this_ptr, bool subscribe)
    IL2CPP_REGISTER_METHOD(0x00D81DE0, void, MakeSureIsRegisteredToEvents, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D81E20,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinAbilityRestrictZone* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00D82070, app::AnimationSwapSet*, get_CurrentSet, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D82140, bool, get_BlockTurning, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D822C0,
        void,
        ModifyHorizontalPlatformMovementSettings,
        app::SeinAbilityRestrictZone* this_ptr,
        app::HorizontalPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(
        0x00D82A30,
        app::HorizontalPlatformMovementSettings*,
        AdjustForNormalizedValues,
        app::SeinAbilityRestrictZone* this_ptr,
        app::HorizontalPlatformMovementSettings* setting
    )
    IL2CPP_REGISTER_METHOD(0x00D82CC0, void, ApplyOverride, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D82E60, void, Awake, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83030, void, OnEnable, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83130, void, OnDisable, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::Rect, get_Bounds, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83230, app::Vector2, GetSize, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83390, bool, get_ShouldRestrict, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D834C0, bool, get_IsInsideZone, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0049AF20, bool, IsPositionInsideZone, app::SeinAbilityRestrictZone* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00D835D0, float, get_NormalizedPositionInsideZoneX, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D836A0, float, get_NormalizedPositionInsideZoneY, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_VirtualTimelineTarget, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83770, app::String*, get_NameDisplayedOnClip, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D837F0, app::SeinAbilityRestrictZoneMask__Enum, ButtonToRestrictZoneMask, app::Input_Command__Enum button)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83820, void, OnAfterDeserialize, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83870, void, PreventFromEntering, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83B70, void, OnFixedUpdate, app::SeinAbilityRestrictZone* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x00D83F30, void, ctor, app::SeinAbilityRestrictZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D83F60, void, cctor, )
} // namespace app::classes::SeinAbilityRestrictZone
