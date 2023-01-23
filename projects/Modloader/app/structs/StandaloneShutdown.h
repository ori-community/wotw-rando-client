#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StandaloneShutdown_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StandaloneShutdown_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneShutdown_DEFINED)
#include <Modloader/app/structs/StandaloneShutdown__Fields.h>
#if defined(IL2CPP_STRUCT_StandaloneShutdown__Fields_DEFINED)
#define IL2CPP_STRUCT_StandaloneShutdown_DEFINED
struct StandaloneShutdown__Class;
struct StandaloneShutdown {
    struct StandaloneShutdown__Class* klass;
    MonitorData* monitor;
    struct StandaloneShutdown__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StandaloneShutdown_FWDDECL)
#define IL2CPP_STRUCT_StandaloneShutdown_FWDDECL
#include <Modloader/app/structs/StandaloneShutdown__Class.h>
#endif
#undef IL2CPP_STRUCT_StandaloneShutdown_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneShutdown_DEFINED) && !defined(IL2CPP_STRUCT_StandaloneShutdown_FWDDECL)
#include <Modloader/app/structs/StandaloneShutdown.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StandaloneShutdown.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
