#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicLightsSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicLightsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLightsSettings__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_DynamicLightsSettings__Fields_DEFINED
struct DynamicLightsSettings__Fields {
    struct ScriptableObject__Fields _;
    struct Vector3 LightBandsDepths;
    bool SimulateCompression;
    bool SynthesizeFront;
    struct Vector4 MaskAttenuationParams;
    bool FullIntensity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicLightsSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicLightsSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DynamicLightsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLightsSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicLightsSettings__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicLightsSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicLightsSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
