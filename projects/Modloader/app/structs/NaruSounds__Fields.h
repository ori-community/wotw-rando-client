#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NaruSounds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NaruSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruSounds__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_NaruSounds__Fields_DEFINED
struct GameObject;
struct SurfaceToSoundProviderMap;
struct Naru;
struct AnimationCurve;
struct Transform;
struct NaruSounds__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* FootstepsEffectPrefab;
    struct SurfaceToSoundProviderMap* FootstepsSounds;
    struct GameObject* JumpEffectPrefab;
    struct SurfaceToSoundProviderMap* JumpSound;
    struct GameObject* LandEffectPrefab;
    struct Naru* Naru;
    struct AnimationCurve* SoundsPerSecondOverSpeed;
    float m_nextStepTime;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NaruSounds__Fields_FWDDECL)
#define IL2CPP_STRUCT_NaruSounds__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_NaruSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NaruSounds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NaruSounds__Fields_FWDDECL)
#include <Modloader/app/structs/NaruSounds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NaruSounds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
