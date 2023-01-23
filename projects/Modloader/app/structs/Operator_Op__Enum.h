#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Operator_Op__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Operator_Op__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operator_Op__Enum_DEFINED)
#define IL2CPP_STRUCT_Operator_Op__Enum_DEFINED
enum class Operator_Op__Enum : int32_t {
    INVALID = 0x00000000,
    OR = 0x00000001,
    AND = 0x00000002,
    EQ = 0x00000003,
    NE = 0x00000004,
    LT = 0x00000005,
    LE = 0x00000006,
    GT = 0x00000007,
    GE = 0x00000008,
    PLUS = 0x00000009,
    MINUS = 0x0000000a,
    MUL = 0x0000000b,
    DIV = 0x0000000c,
    MOD = 0x0000000d,
    UNION = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_Operator_Op__Enum_FWDDECL)
#define IL2CPP_STRUCT_Operator_Op__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Operator_Op__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operator_Op__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Operator_Op__Enum_FWDDECL)
#include <Modloader/app/structs/Operator_Op__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Operator_Op__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
