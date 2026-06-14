#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PermissionSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PermissionSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_PermissionSet_DEFINED)
#include <Modloader/app/structs/PermissionSet__Fields.h>
#if defined(IL2CPP_STRUCT_PermissionSet__Fields_DEFINED)
#define IL2CPP_STRUCT_PermissionSet_DEFINED
struct PermissionSet__Class;
struct PermissionSet {
    struct PermissionSet__Class* klass;
    MonitorData* monitor;
    struct PermissionSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PermissionSet_FWDDECL)
#define IL2CPP_STRUCT_PermissionSet_FWDDECL
#include <Modloader/app/structs/PermissionSet__Class.h>
#endif
#undef IL2CPP_STRUCT_PermissionSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_PermissionSet_DEFINED) && !defined(IL2CPP_STRUCT_PermissionSet_FWDDECL)
#include <Modloader/app/structs/PermissionSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PermissionSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
