#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoAspectRatio__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoAspectRatio__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoAspectRatio__Enum_DEFINED)
#define IL2CPP_STRUCT_VideoAspectRatio__Enum_DEFINED
enum class VideoAspectRatio__Enum : int32_t {
    NoScaling = 0x00000000,
    FitVertically = 0x00000001,
    FitHorizontally = 0x00000002,
    FitInside = 0x00000003,
    FitOutside = 0x00000004,
    Stretch = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_VideoAspectRatio__Enum_FWDDECL)
#define IL2CPP_STRUCT_VideoAspectRatio__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_VideoAspectRatio__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoAspectRatio__Enum_DEFINED) && !defined(IL2CPP_STRUCT_VideoAspectRatio__Enum_FWDDECL)
#include <Modloader/app/structs/VideoAspectRatio__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoAspectRatio__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
