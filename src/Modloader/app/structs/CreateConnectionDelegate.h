#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateConnectionDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateConnectionDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateConnectionDelegate_DEFINED)
#include <Modloader/app/structs/CreateConnectionDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_CreateConnectionDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateConnectionDelegate_DEFINED
struct CreateConnectionDelegate__Class;
struct CreateConnectionDelegate {
    struct CreateConnectionDelegate__Class* klass;
    MonitorData* monitor;
    struct CreateConnectionDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateConnectionDelegate_FWDDECL)
#define IL2CPP_STRUCT_CreateConnectionDelegate_FWDDECL
#include <Modloader/app/structs/CreateConnectionDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateConnectionDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateConnectionDelegate_DEFINED) && !defined(IL2CPP_STRUCT_CreateConnectionDelegate_FWDDECL)
#include <Modloader/app/structs/CreateConnectionDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateConnectionDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
