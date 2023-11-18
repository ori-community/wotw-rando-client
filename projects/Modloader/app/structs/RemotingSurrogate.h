#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingSurrogate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingSurrogate_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingSurrogate_DEFINED)
#define IL2CPP_STRUCT_RemotingSurrogate_DEFINED
struct RemotingSurrogate__Class;
struct RemotingSurrogate {
    struct RemotingSurrogate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RemotingSurrogate_FWDDECL)
#define IL2CPP_STRUCT_RemotingSurrogate_FWDDECL
#include <Modloader/app/structs/RemotingSurrogate__Class.h>
#endif
#undef IL2CPP_STRUCT_RemotingSurrogate_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingSurrogate_DEFINED) && !defined(IL2CPP_STRUCT_RemotingSurrogate_FWDDECL)
#include <Modloader/app/structs/RemotingSurrogate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingSurrogate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
