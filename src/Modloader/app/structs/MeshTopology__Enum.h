#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTopology__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTopology__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTopology__Enum_DEFINED)
#define IL2CPP_STRUCT_MeshTopology__Enum_DEFINED
enum class MeshTopology__Enum : int32_t {
    Triangles = 0x00000000,
    Quads = 0x00000002,
    Lines = 0x00000003,
    LineStrip = 0x00000004,
    Points = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_MeshTopology__Enum_FWDDECL)
#define IL2CPP_STRUCT_MeshTopology__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MeshTopology__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTopology__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MeshTopology__Enum_FWDDECL)
#include <Modloader/app/structs/MeshTopology__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTopology__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
