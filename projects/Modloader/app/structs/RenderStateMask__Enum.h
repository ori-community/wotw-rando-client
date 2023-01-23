#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderStateMask__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderStateMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderStateMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RenderStateMask__Enum_DEFINED
enum class RenderStateMask__Enum : int32_t {
    Nothing = 0x00000000,
    Blend = 0x00000001,
    Raster = 0x00000002,
    Depth = 0x00000004,
    Stencil = 0x00000008,
    Everything = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_RenderStateMask__Enum_FWDDECL)
#define IL2CPP_STRUCT_RenderStateMask__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderStateMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderStateMask__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RenderStateMask__Enum_FWDDECL)
#include <Modloader/app/structs/RenderStateMask__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderStateMask__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
