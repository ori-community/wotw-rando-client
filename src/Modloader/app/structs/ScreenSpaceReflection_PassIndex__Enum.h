#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_DEFINED
enum class ScreenSpaceReflection_PassIndex__Enum : int32_t {
    RayTraceStep = 0x00000000,
    CompositeFinal = 0x00000001,
    Blur = 0x00000002,
    CompositeSSR = 0x00000003,
    MinMipGeneration = 0x00000004,
    HitPointToReflections = 0x00000005,
    BilateralKeyPack = 0x00000006,
    BlitDepthAsCSZ = 0x00000007,
    PoissonBlur = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceReflection_PassIndex__Enum_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceReflection_PassIndex__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceReflection_PassIndex__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
