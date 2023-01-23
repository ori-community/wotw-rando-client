#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebPermission_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebPermission_DEFINED)
#include <Modloader/app/structs/WebPermission__Fields.h>
#if defined(IL2CPP_STRUCT_WebPermission__Fields_DEFINED)
#define IL2CPP_STRUCT_WebPermission_DEFINED
struct WebPermission__Class;
struct WebPermission {
    struct WebPermission__Class* klass;
    MonitorData* monitor;
    struct WebPermission__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebPermission_FWDDECL)
#define IL2CPP_STRUCT_WebPermission_FWDDECL
#include <Modloader/app/structs/WebPermission__Class.h>
#endif
#undef IL2CPP_STRUCT_WebPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebPermission_DEFINED) && !defined(IL2CPP_STRUCT_WebPermission_FWDDECL)
#include <Modloader/app/structs/WebPermission.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebPermission.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
