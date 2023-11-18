#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoRenderMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoRenderMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoRenderMode__Enum_DEFINED)
#define IL2CPP_STRUCT_VideoRenderMode__Enum_DEFINED
enum class VideoRenderMode__Enum : int32_t {
    CameraFarPlane = 0x00000000,
    CameraNearPlane = 0x00000001,
    RenderTexture = 0x00000002,
    MaterialOverride = 0x00000003,
    APIOnly = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_VideoRenderMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_VideoRenderMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_VideoRenderMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoRenderMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_VideoRenderMode__Enum_FWDDECL)
#include <Modloader/app/structs/VideoRenderMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoRenderMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
