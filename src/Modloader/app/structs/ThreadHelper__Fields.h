#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadHelper__Fields_DEFINED
struct Delegate;
struct Object;
struct ExecutionContext;
struct __declspec(align(8)) ThreadHelper__Fields {
    struct Delegate* _start;
    struct Object* _startArg;
    struct ExecutionContext* _executionContext;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_ThreadHelper__Fields_FWDDECL
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ThreadHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadHelper__Fields_FWDDECL)
#include <Modloader/app/structs/ThreadHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
