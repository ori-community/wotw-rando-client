#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueKind__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueKind__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueKind__Enum_DEFINED)
#define IL2CPP_STRUCT_ValueKind__Enum_DEFINED
enum class ValueKind__Enum : int32_t {
    ValueInt64 = 0x00000000,
    ValueUInt64 = 0x00000001,
    ValueInt32 = 0x00000002,
    ValueUInt32 = 0x00000003,
    ValueDouble = 0x00000004,
    ValueString = 0x00000005,
    ValueBool = 0x00000006,
    ValueDateTime = 0x00000007,
    ValueGuid = 0x00000008,
    ValueArrayInt64 = 0x00000009,
    ValueArrayUInt64 = 0x0000000a,
    ValueArrayInt32 = 0x0000000b,
    ValueArrayUInt32 = 0x0000000c,
    ValueArrayDouble = 0x0000000d,
    ValueArrayString = 0x0000000e,
    ValueArrayBool = 0x0000000f,
    ValueArrayDateTime = 0x00000010,
    ValueArrayGuid = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_ValueKind__Enum_FWDDECL)
#define IL2CPP_STRUCT_ValueKind__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ValueKind__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueKind__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ValueKind__Enum_FWDDECL)
#include <Modloader/app/structs/ValueKind__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueKind__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
