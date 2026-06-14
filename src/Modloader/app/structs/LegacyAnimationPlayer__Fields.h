#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/CharacterFactory_Characters__Enum.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_CharacterFactory_Characters__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_DEFINED
struct MoonAnimation;
struct GameObject;
struct MoonAnimator;
struct LegacyAnimationPlayer__Fields {
    struct BaseAnimator__Fields _;
    struct MoonAnimation* Animation;
    struct GameObject* AnimatedObject;
    float DurationOverride;
    bool UseDurationOverride;
    int32_t Priority;
    CharacterFactory_Characters__Enum AnimatedCharacter;

    bool Loop;
    struct MoonAnimator* m_moonAnimator;
    bool m_started;
    struct ActiveAnimationHandle m_animationState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyAnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
