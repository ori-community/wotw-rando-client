#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_ConsoleSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_ConsoleSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_ConsoleSettings_DEFINED)
#define IL2CPP_STRUCT_FXAA_ConsoleSettings_DEFINED
struct FXAA_ConsoleSettings {
    float subpixelSpreadAmount;
    float edgeSharpnessAmount;
    float edgeDetectionThreshold;
    float minimumRequiredLuminance;
};
#endif
#if !defined(IL2CPP_STRUCT_FXAA_ConsoleSettings_FWDDECL)
#define IL2CPP_STRUCT_FXAA_ConsoleSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_FXAA_ConsoleSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_ConsoleSettings_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_ConsoleSettings_FWDDECL)
#include <Modloader/app/structs/FXAA_ConsoleSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA_ConsoleSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
