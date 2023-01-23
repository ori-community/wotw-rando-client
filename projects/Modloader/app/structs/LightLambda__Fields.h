#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightLambda__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightLambda__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightLambda__Fields_DEFINED)
#define IL2CPP_STRUCT_LightLambda__Fields_DEFINED
struct IStrongBox__Array;
struct Interpreter;
struct LightDelegateCreator;
struct __declspec(align(8)) LightLambda__Fields {
    struct IStrongBox__Array* _closure;
    struct Interpreter* _interpreter;
    struct LightDelegateCreator* _delegateCreator;
};
#endif
#if !defined(IL2CPP_STRUCT_LightLambda__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightLambda__Fields_FWDDECL
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/Interpreter.h>
#include <Modloader/app/structs/LightDelegateCreator.h>
#endif
#undef IL2CPP_STRUCT_LightLambda__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightLambda__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightLambda__Fields_FWDDECL)
#include <Modloader/app/structs/LightLambda__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightLambda__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
