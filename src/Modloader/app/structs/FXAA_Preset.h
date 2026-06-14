#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_Preset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_Preset_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_Preset_DEFINED)
#include <Modloader/app/structs/FXAA_ConsoleSettings.h>
#include <Modloader/app/structs/FXAA_QualitySettings.h>
#if defined(IL2CPP_STRUCT_FXAA_QualitySettings_DEFINED) && defined(IL2CPP_STRUCT_FXAA_ConsoleSettings_DEFINED)
#define IL2CPP_STRUCT_FXAA_Preset_DEFINED
struct FXAA_Preset {
    struct FXAA_QualitySettings qualitySettings;
    struct FXAA_ConsoleSettings consoleSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAA_Preset_FWDDECL)
#define IL2CPP_STRUCT_FXAA_Preset_FWDDECL
#endif
#undef IL2CPP_STRUCT_FXAA_Preset_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_Preset_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_Preset_FWDDECL)
#include <Modloader/app/structs/FXAA_Preset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA_Preset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
