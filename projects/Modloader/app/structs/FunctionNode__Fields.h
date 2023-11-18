#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FunctionNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FunctionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FunctionNode__Fields_DEFINED)
#include <Modloader/app/structs/ExpressionNode__Fields.h>
#if defined(IL2CPP_STRUCT_ExpressionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_FunctionNode__Fields_DEFINED
struct String;
struct ExpressionNode__Array;
struct FunctionNode__Fields {
    struct ExpressionNode__Fields _;
    struct String* _name;
    int32_t _info;
    int32_t _argumentCount;
    struct ExpressionNode__Array* _arguments;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FunctionNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_FunctionNode__Fields_FWDDECL
#include <Modloader/app/structs/ExpressionNode__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FunctionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FunctionNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FunctionNode__Fields_FWDDECL)
#include <Modloader/app/structs/FunctionNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FunctionNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
