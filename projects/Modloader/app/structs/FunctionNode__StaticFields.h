#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FunctionNode__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FunctionNode__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FunctionNode__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FunctionNode__StaticFields_DEFINED
struct Function_1__Array;
struct FunctionNode__StaticFields {
    struct Function_1__Array* s_funcs;
};
#endif
#if !defined(IL2CPP_STRUCT_FunctionNode__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FunctionNode__StaticFields_FWDDECL
#include <Modloader/app/structs/Function_1__Array.h>
#endif
#undef IL2CPP_STRUCT_FunctionNode__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FunctionNode__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FunctionNode__StaticFields_FWDDECL)
#include <Modloader/app/structs/FunctionNode__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FunctionNode__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
