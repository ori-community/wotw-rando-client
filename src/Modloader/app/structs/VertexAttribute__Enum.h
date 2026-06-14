#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexAttribute__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexAttribute__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexAttribute__Enum_DEFINED)
#define IL2CPP_STRUCT_VertexAttribute__Enum_DEFINED
enum class VertexAttribute__Enum : int32_t {
    Position = 0x00000000,
    Normal = 0x00000001,
    Tangent = 0x00000002,
    Color = 0x00000003,
    TexCoord0 = 0x00000004,
    TexCoord1 = 0x00000005,
    TexCoord2 = 0x00000006,
    TexCoord3 = 0x00000007,
    TexCoord4 = 0x00000008,
    TexCoord5 = 0x00000009,
    TexCoord6 = 0x0000000a,
    TexCoord7 = 0x0000000b,
    BlendWeight = 0x0000000c,
    BlendIndices = 0x0000000d,
};
#endif
#if !defined(IL2CPP_STRUCT_VertexAttribute__Enum_FWDDECL)
#define IL2CPP_STRUCT_VertexAttribute__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_VertexAttribute__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexAttribute__Enum_DEFINED) && !defined(IL2CPP_STRUCT_VertexAttribute__Enum_FWDDECL)
#include <Modloader/app/structs/VertexAttribute__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexAttribute__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
