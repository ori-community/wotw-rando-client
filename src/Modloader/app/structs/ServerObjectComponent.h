#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObjectComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObjectComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectComponent_DEFINED)
#include <Modloader/app/structs/ServerObjectComponent__Fields.h>
#if defined(IL2CPP_STRUCT_ServerObjectComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerObjectComponent_DEFINED
struct ServerObjectComponent__Class;
struct ServerObjectComponent {
    struct ServerObjectComponent__Class* klass;
    MonitorData* monitor;
    struct ServerObjectComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerObjectComponent_FWDDECL)
#define IL2CPP_STRUCT_ServerObjectComponent_FWDDECL
#include <Modloader/app/structs/ServerObjectComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerObjectComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObjectComponent_DEFINED) && !defined(IL2CPP_STRUCT_ServerObjectComponent_FWDDECL)
#include <Modloader/app/structs/ServerObjectComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObjectComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
