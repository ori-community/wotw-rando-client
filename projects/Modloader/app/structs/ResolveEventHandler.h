#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResolveEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResolveEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolveEventHandler_DEFINED)
#include <Modloader/app/structs/ResolveEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_ResolveEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ResolveEventHandler_DEFINED
struct ResolveEventHandler__Class;
struct ResolveEventHandler {
    struct ResolveEventHandler__Class* klass;
    MonitorData* monitor;
    struct ResolveEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResolveEventHandler_FWDDECL)
#define IL2CPP_STRUCT_ResolveEventHandler_FWDDECL
#include <Modloader/app/structs/ResolveEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ResolveEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResolveEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_ResolveEventHandler_FWDDECL)
#include <Modloader/app/structs/ResolveEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResolveEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
