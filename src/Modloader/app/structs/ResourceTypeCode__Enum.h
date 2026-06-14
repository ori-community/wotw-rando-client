#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResourceTypeCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResourceTypeCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceTypeCode__Enum_DEFINED)
#define IL2CPP_STRUCT_ResourceTypeCode__Enum_DEFINED
enum class ResourceTypeCode__Enum : int32_t {
    Null = 0x00000000,
    String = 0x00000001,
    Boolean = 0x00000002,
    Char = 0x00000003,
    Byte = 0x00000004,
    SByte = 0x00000005,
    Int16 = 0x00000006,
    UInt16 = 0x00000007,
    Int32 = 0x00000008,
    UInt32 = 0x00000009,
    Int64 = 0x0000000a,
    UInt64 = 0x0000000b,
    Single = 0x0000000c,
    Double = 0x0000000d,
    Decimal = 0x0000000e,
    DateTime = 0x0000000f,
    TimeSpan = 0x00000010,
    LastPrimitive = 0x00000010,
    ByteArray = 0x00000020,
    Stream = 0x00000021,
    StartOfUserTypes = 0x00000040,
};
#endif
#if !defined(IL2CPP_STRUCT_ResourceTypeCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_ResourceTypeCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ResourceTypeCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResourceTypeCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ResourceTypeCode__Enum_FWDDECL)
#include <Modloader/app/structs/ResourceTypeCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResourceTypeCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
