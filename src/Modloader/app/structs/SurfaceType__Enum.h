#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceType__Enum_DEFINED)
#define IL2CPP_STRUCT_SurfaceType__Enum_DEFINED
enum class SurfaceType__Enum : int32_t {
    Color = 0x00000002,
    ResolveColor = 0x00000004,
    Depth = 0x00000008,
    DepthAndStencil = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_SurfaceType__Enum_FWDDECL)
#define IL2CPP_STRUCT_SurfaceType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SurfaceType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceType__Enum_FWDDECL)
#include <Modloader/app/structs/SurfaceType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
