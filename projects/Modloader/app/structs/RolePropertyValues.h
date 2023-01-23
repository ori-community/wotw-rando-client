#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RolePropertyValues_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RolePropertyValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_RolePropertyValues_DEFINED)
#include <Modloader/app/structs/RolePropertyValues__Fields.h>
#if defined(IL2CPP_STRUCT_RolePropertyValues__Fields_DEFINED)
#define IL2CPP_STRUCT_RolePropertyValues_DEFINED
struct RolePropertyValues__Class;
struct RolePropertyValues {
    struct RolePropertyValues__Class* klass;
    MonitorData* monitor;
    struct RolePropertyValues__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RolePropertyValues_FWDDECL)
#define IL2CPP_STRUCT_RolePropertyValues_FWDDECL
#include <Modloader/app/structs/RolePropertyValues__Class.h>
#endif
#undef IL2CPP_STRUCT_RolePropertyValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_RolePropertyValues_DEFINED) && !defined(IL2CPP_STRUCT_RolePropertyValues_FWDDECL)
#include <Modloader/app/structs/RolePropertyValues.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RolePropertyValues.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
