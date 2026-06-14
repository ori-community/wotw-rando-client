#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRScreenshotType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRScreenshotType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRScreenshotType__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRScreenshotType__Enum_DEFINED
enum class EVRScreenshotType__Enum : int32_t {
    None = 0x00000000,
    Mono = 0x00000001,
    Stereo = 0x00000002,
    Cubemap = 0x00000003,
    MonoPanorama = 0x00000004,
    StereoPanorama = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRScreenshotType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRScreenshotType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRScreenshotType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRScreenshotType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRScreenshotType__Enum_FWDDECL)
#include <Modloader/app/structs/EVRScreenshotType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRScreenshotType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
