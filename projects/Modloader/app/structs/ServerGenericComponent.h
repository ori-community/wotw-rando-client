#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerGenericComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerGenericComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerGenericComponent_DEFINED)
#include <Modloader/app/structs/ServerGenericComponent__Fields.h>
#if defined(IL2CPP_STRUCT_ServerGenericComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerGenericComponent_DEFINED
struct ServerGenericComponent__Class;
struct ServerGenericComponent {
    struct ServerGenericComponent__Class* klass;
    MonitorData* monitor;
    struct ServerGenericComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerGenericComponent_FWDDECL)
#define IL2CPP_STRUCT_ServerGenericComponent_FWDDECL
#include <Modloader/app/structs/ServerGenericComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerGenericComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerGenericComponent_DEFINED) && !defined(IL2CPP_STRUCT_ServerGenericComponent_FWDDECL)
#include <Modloader/app/structs/ServerGenericComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerGenericComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
