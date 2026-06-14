#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterlockedStack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterlockedStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterlockedStack_DEFINED)
#include <Modloader/app/structs/InterlockedStack__Fields.h>
#if defined(IL2CPP_STRUCT_InterlockedStack__Fields_DEFINED)
#define IL2CPP_STRUCT_InterlockedStack_DEFINED
struct InterlockedStack__Class;
struct InterlockedStack {
    struct InterlockedStack__Class* klass;
    MonitorData* monitor;
    struct InterlockedStack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InterlockedStack_FWDDECL)
#define IL2CPP_STRUCT_InterlockedStack_FWDDECL
#include <Modloader/app/structs/InterlockedStack__Class.h>
#endif
#undef IL2CPP_STRUCT_InterlockedStack_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterlockedStack_DEFINED) && !defined(IL2CPP_STRUCT_InterlockedStack_FWDDECL)
#include <Modloader/app/structs/InterlockedStack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterlockedStack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
