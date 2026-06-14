#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRScreenshotError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRScreenshotError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRScreenshotError__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRScreenshotError__Enum_DEFINED
enum class EVRScreenshotError__Enum : int32_t {
    None = 0x00000000,
    RequestFailed = 0x00000001,
    IncompatibleVersion = 0x00000064,
    NotFound = 0x00000065,
    BufferTooSmall = 0x00000066,
    ScreenshotAlreadyInProgress = 0x0000006c,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRScreenshotError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRScreenshotError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRScreenshotError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRScreenshotError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRScreenshotError__Enum_FWDDECL)
#include <Modloader/app/structs/EVRScreenshotError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRScreenshotError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
