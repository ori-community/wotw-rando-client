#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AstNode_AstType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AstNode_AstType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AstNode_AstType__Enum_DEFINED)
#define IL2CPP_STRUCT_AstNode_AstType__Enum_DEFINED
enum class AstNode_AstType__Enum : int32_t {
    Axis = 0x00000000,
    Operator = 0x00000001,
    Filter = 0x00000002,
    ConstantOperand = 0x00000003,
    Function = 0x00000004,
    Group = 0x00000005,
    Root = 0x00000006,
    Variable = 0x00000007,
    Error = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_AstNode_AstType__Enum_FWDDECL)
#define IL2CPP_STRUCT_AstNode_AstType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AstNode_AstType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AstNode_AstType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AstNode_AstType__Enum_FWDDECL)
#include <Modloader/app/structs/AstNode_AstType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AstNode_AstType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
