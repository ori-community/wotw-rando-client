#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupWithRoles_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupWithRoles_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupWithRoles_DEFINED)
#include <Modloader/app/structs/GroupWithRoles__Fields.h>
#if defined(IL2CPP_STRUCT_GroupWithRoles__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupWithRoles_DEFINED
struct GroupWithRoles__Class;
struct GroupWithRoles {
    struct GroupWithRoles__Class* klass;
    MonitorData* monitor;
    struct GroupWithRoles__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupWithRoles_FWDDECL)
#define IL2CPP_STRUCT_GroupWithRoles_FWDDECL
#include <Modloader/app/structs/GroupWithRoles__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupWithRoles_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupWithRoles_DEFINED) && !defined(IL2CPP_STRUCT_GroupWithRoles_FWDDECL)
#include <Modloader/app/structs/GroupWithRoles.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupWithRoles.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
