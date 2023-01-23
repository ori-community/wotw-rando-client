#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuGlide__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuGlide__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuGlide__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#define IL2CPP_STRUCT_KuGlide__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet;
struct CharacterTimelineTurning;
struct Event_1;
struct FloatZone;
struct KuGlide__Fields {
    struct KuState__Fields _;
    struct MoonAnimation* GlideAnimation;
    struct FloatAnimationParameter* GlideAnimationParameter;
    float GlideSpeed;
    float GravityMultiplier;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* MoveSpeed;
    struct CharacterTimelineTurning* Turning;
    struct CharacterTimelineTurning* IdleTurning;
    struct Event_1* GlideEnterSound;
    struct Event_1* GlideExitSound;
    bool m_isGliding;
    bool m_mofidiersRegistered;
    struct FloatZone* m_currentFloatZone;
    struct CharacterTimelineTurning* m_currentTurning;
    float m_speedParam;
    bool _WantsToFaceLeft_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuGlide__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuGlide__Fields_FWDDECL
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/FloatZone.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_KuGlide__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuGlide__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuGlide__Fields_FWDDECL)
#include <Modloader/app/structs/KuGlide__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuGlide__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
