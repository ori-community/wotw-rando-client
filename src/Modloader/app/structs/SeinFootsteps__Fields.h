#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFootsteps__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFootsteps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFootsteps__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinFootsteps__Fields_DEFINED
struct GameObject;
struct MaterialBasedResourceMap;
struct AnimationCurve;
struct Transform;
struct MoonTimeline;
struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_;
struct PlatformingFXFunctionality;
struct SeinFootsteps__Fields {
    struct CharacterState__Fields _;
    struct GameObject* DustParticlesPrefab;
    struct MaterialBasedResourceMap* EffectsMap;
    struct AnimationCurve* SoundsPerSecondOverSpeed;
    float SoundsPerSecondWhenGrabbing;
    float MinSpeedForFootsteps;
    struct Transform* FootstepVFXHolder;
    float m_nextStepTime;
    struct MoonTimeline* m_currentFootstepVFX;
    SurfaceMaterialType__Enum m_currentFootstepSurfaceMaterial;

    struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_* m_footstepVFX;
    struct PlatformingFXFunctionality* m_fxFunctionality;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFootsteps__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinFootsteps__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MaterialBasedResourceMap.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformingFXFunctionality.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinFootsteps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFootsteps__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinFootsteps__Fields_FWDDECL)
#include <Modloader/app/structs/SeinFootsteps__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFootsteps__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
