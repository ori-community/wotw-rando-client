#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeCode__Enum_DEFINED)
#define IL2CPP_STRUCT_TypeCode__Enum_DEFINED
enum class TypeCode__Enum : int32_t {
    Empty = 0x00000000,
    Object = 0x00000001,
    DBNull = 0x00000002,
    Boolean = 0x00000003,
    Char = 0x00000004,
    SByte = 0x00000005,
    Byte = 0x00000006,
    Int16 = 0x00000007,
    UInt16 = 0x00000008,
    Int32 = 0x00000009,
    UInt32 = 0x0000000a,
    Int64 = 0x0000000b,
    UInt64 = 0x0000000c,
    Single = 0x0000000d,
    Double = 0x0000000e,
    Decimal = 0x0000000f,
    DateTime = 0x00000010,
    String = 0x00000012,
};
#endif
#if !defined(IL2CPP_STRUCT_TypeCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_TypeCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TypeCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TypeCode__Enum_FWDDECL)
#include <Modloader/app/structs/TypeCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
