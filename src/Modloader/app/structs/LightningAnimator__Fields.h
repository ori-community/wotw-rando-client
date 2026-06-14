#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightningAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightningAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LightningAnimator_LightningEvent.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LightningAnimator_LightningEvent_DEFINED)
#define IL2CPP_STRUCT_LightningAnimator__Fields_DEFINED
struct Transform;
struct BaseAnimator__Array;
struct LightningAnimator__Fields {
    struct MonoBehaviour__Fields _;
    float MinTimeBetweenLightnings;
    float MaxTimeBetweenLightnings;
    float MinLightningDuration;
    float MaxLightningDuration;
    struct Transform* SoundTarget;
    struct BaseAnimator__Array* LightningTimelines;
    struct LightningAnimator_LightningEvent m_nextLightning;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightningAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightningAnimator__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LightningAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightningAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LightningAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightningAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
