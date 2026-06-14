#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAgent_DEFINED)
#define IL2CPP_STRUCT_UserAgent_DEFINED
struct UserAgent__Class;
struct UserAgent {
    struct UserAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UserAgent_FWDDECL)
#define IL2CPP_STRUCT_UserAgent_FWDDECL
#include <Modloader/app/structs/UserAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_UserAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAgent_DEFINED) && !defined(IL2CPP_STRUCT_UserAgent_FWDDECL)
#include <Modloader/app/structs/UserAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
