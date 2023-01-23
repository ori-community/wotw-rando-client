#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerDetails_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerDetails_DEFINED)
#include <Modloader/app/structs/ServerDetails__Fields.h>
#if defined(IL2CPP_STRUCT_ServerDetails__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerDetails_DEFINED
struct ServerDetails__Class;
struct ServerDetails {
    struct ServerDetails__Class* klass;
    MonitorData* monitor;
    struct ServerDetails__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerDetails_FWDDECL)
#define IL2CPP_STRUCT_ServerDetails_FWDDECL
#include <Modloader/app/structs/ServerDetails__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerDetails_DEFINED) && !defined(IL2CPP_STRUCT_ServerDetails_FWDDECL)
#include <Modloader/app/structs/ServerDetails.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerDetails.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
