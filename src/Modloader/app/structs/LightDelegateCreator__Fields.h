#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightDelegateCreator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightDelegateCreator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDelegateCreator__Fields_DEFINED)
#define IL2CPP_STRUCT_LightDelegateCreator__Fields_DEFINED
struct LambdaExpression;
struct Interpreter;
struct __declspec(align(8)) LightDelegateCreator__Fields {
    struct LambdaExpression* _lambda;
    struct Interpreter* _Interpreter_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_LightDelegateCreator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightDelegateCreator__Fields_FWDDECL
#include <Modloader/app/structs/Interpreter.h>
#include <Modloader/app/structs/LambdaExpression.h>
#endif
#undef IL2CPP_STRUCT_LightDelegateCreator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDelegateCreator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightDelegateCreator__Fields_FWDDECL)
#include <Modloader/app/structs/LightDelegateCreator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightDelegateCreator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
