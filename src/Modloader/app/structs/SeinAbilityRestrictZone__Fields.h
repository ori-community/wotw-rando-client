#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SeinAbilityRestrictZoneMask__Enum.h>
#include <Modloader/app/structs/SeinAbilityRestrictZoneMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_SeinAbilityRestrictZoneMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinAbilityRestrictZoneMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_DEFINED
struct Condition_1;
struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array;
struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array;
struct AnimationSwapSet;
struct SeinAbilityRestrictZone__Fields {
    struct MonoBehaviour__Fields _;
    bool m_inside;
    float m_characterPositionNormalized;
    struct Rect m_bounds;
    SeinAbilityRestrictZoneMask__Enum RestrictMask;

    SeinAbilityRestrictZoneMask__Enum RestrictMaskLeft;

    SeinAbilityRestrictZoneMask__Enum RestrictMaskRight;

    SeinAbilityRestrictZoneMode__Enum RestrictMode;

    struct Condition_1* Condition;
    float InfluenceWhenMovingLeft;
    float InfluenceWhenMovingRight;
    bool BlockMovementLeft;
    bool BlockMovementRight;
    bool PreventMovingThroughZone;
    bool UseNormalizedValues;
    bool m_subscribedToSeinEvents;
    bool m_subscribedToKuEvents;
    struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array* HorizontalMovementSettings;
    struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array* GravityMovementSettings;
    struct AnimationSwapSet* AnimationSetRight;
    struct AnimationSwapSet* AnimationSetLeft;
    struct Color EditorColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_FWDDECL
#include <Modloader/app/structs/AnimationSwapSet.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinAbilityRestrictZone__Fields_FWDDECL)
#include <Modloader/app/structs/SeinAbilityRestrictZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAbilityRestrictZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
