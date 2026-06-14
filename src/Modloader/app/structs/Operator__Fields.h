#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Operator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Operator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operator__Fields_DEFINED)
#include <Modloader/app/structs/Operator_Op__Enum.h>
#if defined(IL2CPP_STRUCT_Operator_Op__Enum_DEFINED)
#define IL2CPP_STRUCT_Operator__Fields_DEFINED
struct AstNode;
struct __declspec(align(8)) Operator__Fields {
    Operator_Op__Enum opType;

    struct AstNode* opnd1;
    struct AstNode* opnd2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Operator__Fields_FWDDECL)
#define IL2CPP_STRUCT_Operator__Fields_FWDDECL
#include <Modloader/app/structs/AstNode.h>
#endif
#undef IL2CPP_STRUCT_Operator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Operator__Fields_FWDDECL)
#include <Modloader/app/structs/Operator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Operator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
