#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerActionSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerActionSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerActionSequence_DEFINED)
#include <Modloader/app/structs/ServerActionSequence__Fields.h>
#if defined(IL2CPP_STRUCT_ServerActionSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerActionSequence_DEFINED
struct ServerActionSequence__Class;
struct ServerActionSequence {
    struct ServerActionSequence__Class* klass;
    MonitorData* monitor;
    struct ServerActionSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerActionSequence_FWDDECL)
#define IL2CPP_STRUCT_ServerActionSequence_FWDDECL
#include <Modloader/app/structs/ServerActionSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerActionSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerActionSequence_DEFINED) && !defined(IL2CPP_STRUCT_ServerActionSequence_FWDDECL)
#include <Modloader/app/structs/ServerActionSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerActionSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
