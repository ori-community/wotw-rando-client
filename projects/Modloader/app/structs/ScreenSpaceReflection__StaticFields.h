#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_DEFINED
struct Int32__Array;
struct ScreenSpaceReflection__StaticFields {
    int32_t kNormalAndRoughnessTexture;
    int32_t kHitPointTexture;
    struct Int32__Array* kReflectionTextures;
    int32_t kFilteredReflections;
    int32_t kBlurTexture;
    int32_t kFinalReflectionTexture;
    int32_t kTempTexture;
};
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceReflection__StaticFields_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceReflection__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceReflection__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
