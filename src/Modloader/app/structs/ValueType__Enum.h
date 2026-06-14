#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueType__Enum_DEFINED)
#define IL2CPP_STRUCT_ValueType__Enum_DEFINED
enum class ValueType__Enum : int32_t {
    Unknown = -1,
    Null = 0x00000000,
    Bool = 0x00000001,
    Numeric = 0x00000002,
    Str = 0x00000003,
    Float = 0x00000004,
    Decimal = 0x00000005,
    Object = 0x00000006,
    Date = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_ValueType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ValueType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ValueType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ValueType__Enum_FWDDECL)
#include <Modloader/app/structs/ValueType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
