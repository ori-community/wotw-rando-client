#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_DEFINED
struct Transform;
struct UberWaterControl;
struct MoonReference_1_UberWaterControl_;
struct DisplacementWaveAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Transform* WaveSource;
    struct UberWaterControl* WaterControl;
    struct MoonReference_1_UberWaterControl_* UberWaterControl;
    float WaveForce;
    float WaveRadius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UberWaterControl_.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberWaterControl.h>
#endif
#undef IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DisplacementWaveAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/DisplacementWaveAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisplacementWaveAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
