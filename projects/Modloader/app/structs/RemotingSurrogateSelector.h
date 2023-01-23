#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingSurrogateSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingSurrogateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector_DEFINED)
#include <Modloader/app/structs/RemotingSurrogateSelector__Fields.h>
#if defined(IL2CPP_STRUCT_RemotingSurrogateSelector__Fields_DEFINED)
#define IL2CPP_STRUCT_RemotingSurrogateSelector_DEFINED
struct RemotingSurrogateSelector__Class;
struct RemotingSurrogateSelector {
    struct RemotingSurrogateSelector__Class* klass;
    MonitorData* monitor;
    struct RemotingSurrogateSelector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector_FWDDECL)
#define IL2CPP_STRUCT_RemotingSurrogateSelector_FWDDECL
#include <Modloader/app/structs/RemotingSurrogateSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_RemotingSurrogateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingSurrogateSelector_DEFINED) && !defined(IL2CPP_STRUCT_RemotingSurrogateSelector_FWDDECL)
#include <Modloader/app/structs/RemotingSurrogateSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingSurrogateSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
