#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_GlobalSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_GlobalSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_GlobalSettings_DEFINED)
#include <Modloader/app/structs/SMAA_DebugPass__Enum.h>
#include <Modloader/app/structs/SMAA_EdgeDetectionMethod__Enum.h>
#include <Modloader/app/structs/SMAA_QualityPreset__Enum.h>
#if defined(IL2CPP_STRUCT_SMAA_DebugPass__Enum_DEFINED) && defined(IL2CPP_STRUCT_SMAA_QualityPreset__Enum_DEFINED) && defined(IL2CPP_STRUCT_SMAA_EdgeDetectionMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_SMAA_GlobalSettings_DEFINED
struct SMAA_GlobalSettings {
    SMAA_DebugPass__Enum debugPass;

    SMAA_QualityPreset__Enum quality;

    SMAA_EdgeDetectionMethod__Enum edgeDetectionMethod;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SMAA_GlobalSettings_FWDDECL)
#define IL2CPP_STRUCT_SMAA_GlobalSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_SMAA_GlobalSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_GlobalSettings_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_GlobalSettings_FWDDECL)
#include <Modloader/app/structs/SMAA_GlobalSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_GlobalSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
