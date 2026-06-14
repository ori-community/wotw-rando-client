#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuFall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuFall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuFall__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#define IL2CPP_STRUCT_KuFall__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct CharacterTimelineTurning;
struct KuFall__Fields {
    struct KuState__Fields _;
    struct MoonAnimation* FallBlendAnimation;
    struct FloatAnimationParameter* FallBlendParameter;
    struct CharacterTimelineTurning* FallTurning;
    struct CharacterTimelineTurning* FallIdleTurning;
    struct CharacterTimelineTurning* m_currentTurning;
    bool _WantsToFaceLeft_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuFall__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuFall__Fields_FWDDECL
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_KuFall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuFall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuFall__Fields_FWDDECL)
#include <Modloader/app/structs/KuFall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuFall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
