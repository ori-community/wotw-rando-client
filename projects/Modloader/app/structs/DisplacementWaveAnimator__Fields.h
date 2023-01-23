#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_DEFINED
struct Transform;
struct UberWaterControl;
struct DisplacementWaveAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct Transform* WaveSource;
    struct UberWaterControl* WaterControl;
    float WaveForce;
    float WaveRadius;
    bool m_hasPlayed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberWaterControl.h>
#endif
#undef IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DisplacementWaveAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/DisplacementWaveAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisplacementWaveAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
