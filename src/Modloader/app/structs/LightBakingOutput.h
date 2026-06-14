#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightBakingOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightBakingOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightBakingOutput_DEFINED)
#include <Modloader/app/structs/LightmapBakeType__Enum.h>
#include <Modloader/app/structs/MixedLightingMode__Enum.h>
#if defined(IL2CPP_STRUCT_LightmapBakeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_MixedLightingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LightBakingOutput_DEFINED
struct LightBakingOutput {
    int32_t probeOcclusionLightIndex;
    int32_t occlusionMaskChannel;
    LightmapBakeType__Enum lightmapBakeType;

    MixedLightingMode__Enum mixedLightingMode;

    bool isBaked;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightBakingOutput_FWDDECL)
#define IL2CPP_STRUCT_LightBakingOutput_FWDDECL
#endif
#undef IL2CPP_STRUCT_LightBakingOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightBakingOutput_DEFINED) && !defined(IL2CPP_STRUCT_LightBakingOutput_FWDDECL)
#include <Modloader/app/structs/LightBakingOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightBakingOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
