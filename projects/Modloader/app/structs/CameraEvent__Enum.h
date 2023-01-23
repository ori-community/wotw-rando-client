#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraEvent__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraEvent__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraEvent__Enum_DEFINED)
#define IL2CPP_STRUCT_CameraEvent__Enum_DEFINED
enum class CameraEvent__Enum : int32_t {
    BeforeDepthTexture = 0x00000000,
    AfterDepthTexture = 0x00000001,
    BeforeDepthNormalsTexture = 0x00000002,
    AfterDepthNormalsTexture = 0x00000003,
    BeforeGBuffer = 0x00000004,
    AfterGBuffer = 0x00000005,
    BeforeLighting = 0x00000006,
    AfterLighting = 0x00000007,
    BeforeFinalPass = 0x00000008,
    AfterFinalPass = 0x00000009,
    BeforeForwardOpaque = 0x0000000a,
    AfterForwardOpaque = 0x0000000b,
    BeforeImageEffectsOpaque = 0x0000000c,
    AfterImageEffectsOpaque = 0x0000000d,
    BeforeSkybox = 0x0000000e,
    AfterSkybox = 0x0000000f,
    BeforeForwardAlpha = 0x00000010,
    AfterForwardAlpha = 0x00000011,
    BeforeImageEffects = 0x00000012,
    AfterImageEffects = 0x00000013,
    AfterEverything = 0x00000014,
    BeforeReflections = 0x00000015,
    AfterReflections = 0x00000016,
    BeforeHaloAndLensFlares = 0x00000017,
    AfterHaloAndLensFlares = 0x00000018,
};
#endif
#if !defined(IL2CPP_STRUCT_CameraEvent__Enum_FWDDECL)
#define IL2CPP_STRUCT_CameraEvent__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraEvent__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraEvent__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CameraEvent__Enum_FWDDECL)
#include <Modloader/app/structs/CameraEvent__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraEvent__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
