#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyReloadedEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyReloadedEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyReloadedEvent_DEFINED)
#include <Modloader/app/structs/AssemblyReloadedEvent__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyReloadedEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyReloadedEvent_DEFINED
struct AssemblyReloadedEvent__Class;
struct AssemblyReloadedEvent {
    struct AssemblyReloadedEvent__Class* klass;
    MonitorData* monitor;
    struct AssemblyReloadedEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyReloadedEvent_FWDDECL)
#define IL2CPP_STRUCT_AssemblyReloadedEvent_FWDDECL
#include <Modloader/app/structs/AssemblyReloadedEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyReloadedEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyReloadedEvent_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyReloadedEvent_FWDDECL)
#include <Modloader/app/structs/AssemblyReloadedEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyReloadedEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
