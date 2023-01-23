#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraType__Enum_DEFINED)
#define IL2CPP_STRUCT_CameraType__Enum_DEFINED
enum class CameraType__Enum : int32_t {
    Game = 0x00000001,
    SceneView = 0x00000002,
    Preview = 0x00000004,
    VR = 0x00000008,
    Reflection = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_CameraType__Enum_FWDDECL)
#define IL2CPP_STRUCT_CameraType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CameraType__Enum_FWDDECL)
#include <Modloader/app/structs/CameraType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
