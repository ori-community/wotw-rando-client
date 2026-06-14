#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OpenedHost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OpenedHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenedHost_DEFINED)
#include <Modloader/app/structs/OpenedHost__Fields.h>
#if defined(IL2CPP_STRUCT_OpenedHost__Fields_DEFINED)
#define IL2CPP_STRUCT_OpenedHost_DEFINED
struct OpenedHost__Class;
struct OpenedHost {
    struct OpenedHost__Class* klass;
    MonitorData* monitor;
    struct OpenedHost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OpenedHost_FWDDECL)
#define IL2CPP_STRUCT_OpenedHost_FWDDECL
#include <Modloader/app/structs/OpenedHost__Class.h>
#endif
#undef IL2CPP_STRUCT_OpenedHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_OpenedHost_DEFINED) && !defined(IL2CPP_STRUCT_OpenedHost_FWDDECL)
#include <Modloader/app/structs/OpenedHost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OpenedHost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
