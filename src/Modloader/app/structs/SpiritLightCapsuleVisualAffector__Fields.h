#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_DEFINED
struct Transform;
struct SpiritLightTurbulence;
struct SpiritLightCapsuleVisualAffector__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* StartPoint;
    struct Transform* EndPoint;
    float LightIntensity;
    float StartRadius;
    float EndRadius;
    struct SpiritLightTurbulence* LightRadiusTurbulence;
    struct SpiritLightTurbulence* LightIntensityTurbulence;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_FWDDECL
#include <Modloader/app/structs/SpiritLightTurbulence.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLightCapsuleVisualAffector__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLightCapsuleVisualAffector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLightCapsuleVisualAffector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
