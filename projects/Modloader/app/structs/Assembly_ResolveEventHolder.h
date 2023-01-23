#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Assembly_ResolveEventHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Assembly_ResolveEventHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assembly_ResolveEventHolder_DEFINED)
#define IL2CPP_STRUCT_Assembly_ResolveEventHolder_DEFINED
struct Assembly_ResolveEventHolder__Class;
struct Assembly_ResolveEventHolder {
    struct Assembly_ResolveEventHolder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Assembly_ResolveEventHolder_FWDDECL)
#define IL2CPP_STRUCT_Assembly_ResolveEventHolder_FWDDECL
#include <Modloader/app/structs/Assembly_ResolveEventHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_Assembly_ResolveEventHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assembly_ResolveEventHolder_DEFINED) && !defined(IL2CPP_STRUCT_Assembly_ResolveEventHolder_FWDDECL)
#include <Modloader/app/structs/Assembly_ResolveEventHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Assembly_ResolveEventHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
