#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingException_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingException_DEFINED)
#include <Modloader/app/structs/RemotingException__Fields.h>
#if defined(IL2CPP_STRUCT_RemotingException__Fields_DEFINED)
#define IL2CPP_STRUCT_RemotingException_DEFINED
struct RemotingException__Class;
struct RemotingException {
    struct RemotingException__Class* klass;
    MonitorData* monitor;
    struct RemotingException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemotingException_FWDDECL)
#define IL2CPP_STRUCT_RemotingException_FWDDECL
#include <Modloader/app/structs/RemotingException__Class.h>
#endif
#undef IL2CPP_STRUCT_RemotingException_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingException_DEFINED) && !defined(IL2CPP_STRUCT_RemotingException_FWDDECL)
#include <Modloader/app/structs/RemotingException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
