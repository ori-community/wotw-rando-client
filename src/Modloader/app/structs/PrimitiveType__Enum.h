#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrimitiveType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrimitiveType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimitiveType__Enum_DEFINED)
#define IL2CPP_STRUCT_PrimitiveType__Enum_DEFINED
enum class PrimitiveType__Enum : int32_t {
    Sphere = 0x00000000,
    Capsule = 0x00000001,
    Cylinder = 0x00000002,
    Cube = 0x00000003,
    Plane = 0x00000004,
    Quad = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_PrimitiveType__Enum_FWDDECL)
#define IL2CPP_STRUCT_PrimitiveType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PrimitiveType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimitiveType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PrimitiveType__Enum_FWDDECL)
#include <Modloader/app/structs/PrimitiveType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrimitiveType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
