#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityPermission_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityPermission_DEFINED)
#include <Modloader/app/structs/SecurityPermission__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityPermission__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityPermission_DEFINED
struct SecurityPermission__Class;
struct SecurityPermission {
    struct SecurityPermission__Class* klass;
    MonitorData* monitor;
    struct SecurityPermission__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityPermission_FWDDECL)
#define IL2CPP_STRUCT_SecurityPermission_FWDDECL
#include <Modloader/app/structs/SecurityPermission__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityPermission_DEFINED) && !defined(IL2CPP_STRUCT_SecurityPermission_FWDDECL)
#include <Modloader/app/structs/SecurityPermission.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityPermission.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
