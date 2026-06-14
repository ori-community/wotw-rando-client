#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecutionContextSwitcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecutionContextSwitcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContextSwitcher_DEFINED)
#include <Modloader/app/structs/ExecutionContext_Reader.h>
#if defined(IL2CPP_STRUCT_ExecutionContext_Reader_DEFINED)
#define IL2CPP_STRUCT_ExecutionContextSwitcher_DEFINED
struct Object;
struct Thread;
struct ExecutionContextSwitcher {
    struct ExecutionContext_Reader outerEC;
    bool outerECBelongsToScope;
    struct Object* hecsw;
    struct Thread* thread;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecutionContextSwitcher_FWDDECL)
#define IL2CPP_STRUCT_ExecutionContextSwitcher_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_ExecutionContextSwitcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContextSwitcher_DEFINED) && !defined(IL2CPP_STRUCT_ExecutionContextSwitcher_FWDDECL)
#include <Modloader/app/structs/ExecutionContextSwitcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecutionContextSwitcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
