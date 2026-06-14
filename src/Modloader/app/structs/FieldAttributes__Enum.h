#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_FieldAttributes__Enum_DEFINED
enum class FieldAttributes__Enum : int32_t {
    FieldAccessMask = 0x00000007,
    PrivateScope = 0x00000000,
    Private = 0x00000001,
    FamANDAssem = 0x00000002,
    Assembly = 0x00000003,
    Family = 0x00000004,
    FamORAssem = 0x00000005,
    Public = 0x00000006,
    Static = 0x00000010,
    InitOnly = 0x00000020,
    Literal = 0x00000040,
    NotSerialized = 0x00000080,
    SpecialName = 0x00000200,
    PinvokeImpl = 0x00002000,
    ReservedMask = 0x00009500,
    RTSpecialName = 0x00000400,
    HasFieldMarshal = 0x00001000,
    HasDefault = 0x00008000,
    HasFieldRVA = 0x00000100,
};
#endif
#if !defined(IL2CPP_STRUCT_FieldAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_FieldAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FieldAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FieldAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/FieldAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
