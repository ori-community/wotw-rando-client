#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamedPermissionSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamedPermissionSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamedPermissionSet_DEFINED)
#include <Modloader/app/structs/NamedPermissionSet__Fields.h>
#if defined(IL2CPP_STRUCT_NamedPermissionSet__Fields_DEFINED)
#define IL2CPP_STRUCT_NamedPermissionSet_DEFINED
struct NamedPermissionSet__Class;
struct NamedPermissionSet {
    struct NamedPermissionSet__Class* klass;
    MonitorData* monitor;
    struct NamedPermissionSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamedPermissionSet_FWDDECL)
#define IL2CPP_STRUCT_NamedPermissionSet_FWDDECL
#include <Modloader/app/structs/NamedPermissionSet__Class.h>
#endif
#undef IL2CPP_STRUCT_NamedPermissionSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamedPermissionSet_DEFINED) && !defined(IL2CPP_STRUCT_NamedPermissionSet_FWDDECL)
#include <Modloader/app/structs/NamedPermissionSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamedPermissionSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
