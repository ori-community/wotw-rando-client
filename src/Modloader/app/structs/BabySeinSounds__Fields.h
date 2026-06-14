#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySeinSounds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySeinSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinSounds__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BabySeinSounds__Fields_DEFINED
struct BabySein;
struct GameObject;
struct SurfaceToSoundProviderMap;
struct AnimationCurve;
struct Transform;
struct BabySeinSounds__Fields {
    struct MonoBehaviour__Fields _;
    struct BabySein* BabySein;
    struct GameObject* FootstepsEffectPrefab;
    struct SurfaceToSoundProviderMap* FootstepsSounds;
    struct GameObject* JumpEffectPrefab;
    struct SurfaceToSoundProviderMap* JumpSound;
    struct GameObject* LandEffectPrefab;
    struct SurfaceToSoundProviderMap* LandSound;
    struct AnimationCurve* SoundsPerSecondOverSpeed;
    float m_nextStepTime;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySeinSounds__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabySeinSounds__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BabySein.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BabySeinSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinSounds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabySeinSounds__Fields_FWDDECL)
#include <Modloader/app/structs/BabySeinSounds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySeinSounds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
