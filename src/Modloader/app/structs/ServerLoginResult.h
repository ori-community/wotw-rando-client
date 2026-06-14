#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerLoginResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerLoginResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerLoginResult_DEFINED)
#include <Modloader/app/structs/ServerLoginResult__Fields.h>
#if defined(IL2CPP_STRUCT_ServerLoginResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerLoginResult_DEFINED
struct ServerLoginResult__Class;
struct ServerLoginResult {
    struct ServerLoginResult__Class* klass;
    MonitorData* monitor;
    struct ServerLoginResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerLoginResult_FWDDECL)
#define IL2CPP_STRUCT_ServerLoginResult_FWDDECL
#include <Modloader/app/structs/ServerLoginResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerLoginResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerLoginResult_DEFINED) && !defined(IL2CPP_STRUCT_ServerLoginResult_FWDDECL)
#include <Modloader/app/structs/ServerLoginResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerLoginResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
