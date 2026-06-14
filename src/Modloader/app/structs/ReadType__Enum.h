#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadType__Enum_DEFINED)
#define IL2CPP_STRUCT_ReadType__Enum_DEFINED
enum class ReadType__Enum : int32_t {
    Read = 0x00000000,
    ReadAsInt32 = 0x00000001,
    ReadAsInt64 = 0x00000002,
    ReadAsBytes = 0x00000003,
    ReadAsString = 0x00000004,
    ReadAsDecimal = 0x00000005,
    ReadAsDateTime = 0x00000006,
    ReadAsDateTimeOffset = 0x00000007,
    ReadAsDouble = 0x00000008,
    ReadAsBoolean = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_ReadType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ReadType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReadType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ReadType__Enum_FWDDECL)
#include <Modloader/app/structs/ReadType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
