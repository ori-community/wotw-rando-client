#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnProjectStartup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnProjectStartup_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnProjectStartup_DEFINED)
#define IL2CPP_STRUCT_OnProjectStartup_DEFINED
struct OnProjectStartup__Class;
struct OnProjectStartup {
    struct OnProjectStartup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OnProjectStartup_FWDDECL)
#define IL2CPP_STRUCT_OnProjectStartup_FWDDECL
#include <Modloader/app/structs/OnProjectStartup__Class.h>
#endif
#undef IL2CPP_STRUCT_OnProjectStartup_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnProjectStartup_DEFINED) && !defined(IL2CPP_STRUCT_OnProjectStartup_FWDDECL)
#include <Modloader/app/structs/OnProjectStartup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnProjectStartup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
