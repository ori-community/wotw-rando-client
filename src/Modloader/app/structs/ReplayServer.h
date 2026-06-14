#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayServer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayServer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayServer_DEFINED)
#include <Modloader/app/structs/ReplayServer__Fields.h>
#if defined(IL2CPP_STRUCT_ReplayServer__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayServer_DEFINED
struct ReplayServer__Class;
struct ReplayServer {
    struct ReplayServer__Class* klass;
    MonitorData* monitor;
    struct ReplayServer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayServer_FWDDECL)
#define IL2CPP_STRUCT_ReplayServer_FWDDECL
#include <Modloader/app/structs/ReplayServer__Class.h>
#endif
#undef IL2CPP_STRUCT_ReplayServer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayServer_DEFINED) && !defined(IL2CPP_STRUCT_ReplayServer_FWDDECL)
#include <Modloader/app/structs/ReplayServer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayServer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
