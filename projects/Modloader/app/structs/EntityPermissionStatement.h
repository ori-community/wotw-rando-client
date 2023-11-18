#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPermissionStatement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPermissionStatement_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPermissionStatement_DEFINED)
#include <Modloader/app/structs/EntityPermissionStatement__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPermissionStatement__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityPermissionStatement_DEFINED
struct EntityPermissionStatement__Class;
struct EntityPermissionStatement {
    struct EntityPermissionStatement__Class* klass;
    MonitorData* monitor;
    struct EntityPermissionStatement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPermissionStatement_FWDDECL)
#define IL2CPP_STRUCT_EntityPermissionStatement_FWDDECL
#include <Modloader/app/structs/EntityPermissionStatement__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityPermissionStatement_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPermissionStatement_DEFINED) && !defined(IL2CPP_STRUCT_EntityPermissionStatement_FWDDECL)
#include <Modloader/app/structs/EntityPermissionStatement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPermissionStatement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
