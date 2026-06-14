#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodBody__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBody__Fields_DEFINED)
#define IL2CPP_STRUCT_MethodBody__Fields_DEFINED
struct ExceptionHandlingClause__Array;
struct LocalVariableInfo__Array;
struct Byte__Array;
struct __declspec(align(8)) MethodBody__Fields {
    struct ExceptionHandlingClause__Array* clauses;
    struct LocalVariableInfo__Array* locals;
    struct Byte__Array* il;
    bool init_locals;
    int32_t sig_token;
    int32_t max_stack;
};
#endif
#if !defined(IL2CPP_STRUCT_MethodBody__Fields_FWDDECL)
#define IL2CPP_STRUCT_MethodBody__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ExceptionHandlingClause__Array.h>
#include <Modloader/app/structs/LocalVariableInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_MethodBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodBody__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MethodBody__Fields_FWDDECL)
#include <Modloader/app/structs/MethodBody__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodBody__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
