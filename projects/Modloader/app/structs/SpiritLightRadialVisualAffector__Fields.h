#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SpiritLightPriority__Enum.h>
#include <Modloader/app/structs/SpiritLightType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritLightType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiritLightPriority__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_DEFINED
struct SpiritLightTurbulence;
struct Transform;
struct SpiritLightRadialVisualAffector__Fields {
    struct MonoBehaviour__Fields _;
    float LightIntensity;
    float Radius;
    float BoundsMultiplier;
    SpiritLightType__Enum LightType;

    SpiritLightPriority__Enum LightPriority;

    struct SpiritLightTurbulence* LightRadiusTurbulence;
    struct SpiritLightTurbulence* LightIntensityTurbulence;
    bool IsPlayerLight;
    struct Transform* m_transform;
    bool m_hasInited;
    bool _InsideFrustum_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_FWDDECL
#include <Modloader/app/structs/SpiritLightTurbulence.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLightRadialVisualAffector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLightRadialVisualAffector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
