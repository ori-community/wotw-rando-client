#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_DEFINED
enum class BinaryArrayTypeEnum__Enum : int32_t {
    Single = 0x00000000,
    Jagged = 0x00000001,
    Rectangular = 0x00000002,
    SingleOffset = 0x00000003,
    JaggedOffset = 0x00000004,
    RectangularOffset = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_FWDDECL)
#define IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BinaryArrayTypeEnum__Enum_FWDDECL)
#include <Modloader/app/structs/BinaryArrayTypeEnum__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryArrayTypeEnum__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
