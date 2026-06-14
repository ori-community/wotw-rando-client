#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_DEFINED)
#include <Modloader/app/structs/ScreenSpaceReflection_IntensitySettings.h>
#include <Modloader/app/structs/ScreenSpaceReflection_ReflectionSettings.h>
#include <Modloader/app/structs/ScreenSpaceReflection_ScreenEdgeMask.h>
#if defined(IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_DEFINED) && defined(IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_DEFINED) && defined(IL2CPP_STRUCT_ScreenSpaceReflection_ScreenEdgeMask_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_DEFINED
struct ScreenSpaceReflection_SSRSettings {
    struct ScreenSpaceReflection_ReflectionSettings reflectionSettings;
    struct ScreenSpaceReflection_IntensitySettings intensitySettings;
    struct ScreenSpaceReflection_ScreenEdgeMask screenEdgeMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceReflection_SSRSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceReflection_SSRSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
