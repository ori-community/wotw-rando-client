#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryTypeEnum__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryTypeEnum__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryTypeEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryTypeEnum__Enum_DEFINED
enum class BinaryTypeEnum__Enum : int32_t {
    Primitive = 0x00000000,
    String = 0x00000001,
    Object = 0x00000002,
    ObjectUrt = 0x00000003,
    ObjectUser = 0x00000004,
    ObjectArray = 0x00000005,
    StringArray = 0x00000006,
    PrimitiveArray = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_BinaryTypeEnum__Enum_FWDDECL)
#define IL2CPP_STRUCT_BinaryTypeEnum__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BinaryTypeEnum__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryTypeEnum__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BinaryTypeEnum__Enum_FWDDECL)
#include <Modloader/app/structs/BinaryTypeEnum__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryTypeEnum__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
