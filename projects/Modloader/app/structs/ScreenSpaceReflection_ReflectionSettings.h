#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_DEFINED)
#include <Modloader/app/structs/ScreenSpaceReflection_SSRReflectionBlendType__Enum.h>
#include <Modloader/app/structs/ScreenSpaceReflection_SSRResolution__Enum.h>
#if defined(IL2CPP_STRUCT_ScreenSpaceReflection_SSRReflectionBlendType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ScreenSpaceReflection_SSRResolution__Enum_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_DEFINED
struct ScreenSpaceReflection_ReflectionSettings {
    ScreenSpaceReflection_SSRReflectionBlendType__Enum blendType;

    ScreenSpaceReflection_SSRResolution__Enum reflectionQuality;

    float maxDistance;
    int32_t iterationCount;
    int32_t stepSize;
    float widthModifier;
    float reflectionBlur;
    bool reflectBackfaces;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceReflection_ReflectionSettings_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceReflection_ReflectionSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceReflection_ReflectionSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
