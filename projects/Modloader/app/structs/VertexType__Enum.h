#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexType__Enum_DEFINED)
#define IL2CPP_STRUCT_VertexType__Enum_DEFINED
enum class VertexType__Enum : int32_t {
    InputVertex = 0x00000000,
    SegmentVertex = 0x00000001,
    FreeVertex = 0x00000002,
    DeadVertex = 0x00000003,
    UndeadVertex = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_VertexType__Enum_FWDDECL)
#define IL2CPP_STRUCT_VertexType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_VertexType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_VertexType__Enum_FWDDECL)
#include <Modloader/app/structs/VertexType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
