#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LensAberrations_Pass__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LensAberrations_Pass__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_Pass__Enum_DEFINED)
#define IL2CPP_STRUCT_LensAberrations_Pass__Enum_DEFINED
enum class LensAberrations_Pass__Enum : int32_t {
    BlurPrePass = 0x00000000,
    Chroma = 0x00000001,
    Distort = 0x00000002,
    Vignette = 0x00000003,
    ChromaDistort = 0x00000004,
    ChromaVignette = 0x00000005,
    DistortVignette = 0x00000006,
    ChromaDistortVignette = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_LensAberrations_Pass__Enum_FWDDECL)
#define IL2CPP_STRUCT_LensAberrations_Pass__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LensAberrations_Pass__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_Pass__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LensAberrations_Pass__Enum_FWDDECL)
#include <Modloader/app/structs/LensAberrations_Pass__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LensAberrations_Pass__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
