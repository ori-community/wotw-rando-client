#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationOrder__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationOrder__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationOrder__Enum_DEFINED)
#define IL2CPP_STRUCT_RotationOrder__Enum_DEFINED
enum class RotationOrder__Enum : int32_t {
    OrderXYZ = 0x00000000,
    OrderXZY = 0x00000001,
    OrderYZX = 0x00000002,
    OrderYXZ = 0x00000003,
    OrderZXY = 0x00000004,
    OrderZYX = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_RotationOrder__Enum_FWDDECL)
#define IL2CPP_STRUCT_RotationOrder__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RotationOrder__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationOrder__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RotationOrder__Enum_FWDDECL)
#include <Modloader/app/structs/RotationOrder__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationOrder__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
