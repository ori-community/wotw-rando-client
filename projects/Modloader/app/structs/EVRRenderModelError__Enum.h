#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRRenderModelError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRRenderModelError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRRenderModelError__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRRenderModelError__Enum_DEFINED
enum class EVRRenderModelError__Enum : int32_t {
    None = 0x00000000,
    Loading = 0x00000064,
    NotSupported = 0x000000c8,
    InvalidArg = 0x0000012c,
    InvalidModel = 0x0000012d,
    NoShapes = 0x0000012e,
    MultipleShapes = 0x0000012f,
    TooManyVertices = 0x00000130,
    MultipleTextures = 0x00000131,
    BufferTooSmall = 0x00000132,
    NotEnoughNormals = 0x00000133,
    NotEnoughTexCoords = 0x00000134,
    InvalidTexture = 0x00000190,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRRenderModelError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRRenderModelError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRRenderModelError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRRenderModelError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRRenderModelError__Enum_FWDDECL)
#include <Modloader/app/structs/EVRRenderModelError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRRenderModelError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
