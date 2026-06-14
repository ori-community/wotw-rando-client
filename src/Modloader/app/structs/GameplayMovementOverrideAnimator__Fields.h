#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_DEFINED)
#include <Modloader/app/structs/SeinAbilityRestrictZoneMask__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinAbilityRestrictZoneMask__Enum_DEFINED)
#define IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_DEFINED
struct HorizontalPlatformMovementSettings;
struct GravityPlatformMovementSettings;
struct AnimationSwapSet;
struct GameplayMovementOverrideAnimator__Fields {
    struct TimelineEntity__Fields _;
    bool OverridePlatformMovementSettings;
    struct HorizontalPlatformMovementSettings* HorizontalMovementSettings;
    struct GravityPlatformMovementSettings* GravitySettings;
    SeinAbilityRestrictZoneMask__Enum RestrictMask;

    struct AnimationSwapSet* AnimationSetRight;
    struct AnimationSwapSet* AnimationSetLeft;
    float InfluenceWhenMovingLeft;
    float InfluenceWhenMovingRight;
    bool BlockMovementLeft;
    bool BlockMovementRight;
    bool m_modifyCallbackAssigned;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationSwapSet.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#endif
#undef IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameplayMovementOverrideAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/GameplayMovementOverrideAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplayMovementOverrideAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
