#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderingType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderingType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderingType__Enum_DEFINED)
#define IL2CPP_STRUCT_RenderingType__Enum_DEFINED
enum class RenderingType__Enum : int32_t {
    Primitives = 0x00000000,
    Meshes = 0x00000001,
};
#endif
#if !defined(IL2CPP_STRUCT_RenderingType__Enum_FWDDECL)
#define IL2CPP_STRUCT_RenderingType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderingType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderingType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RenderingType__Enum_FWDDECL)
#include <Modloader/app/structs/RenderingType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderingType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
