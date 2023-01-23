#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidBodyPortalVistor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidBodyPortalVistor_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidBodyPortalVistor_DEFINED)
#include <Modloader/app/structs/RigidBodyPortalVistor__Fields.h>
#if defined(IL2CPP_STRUCT_RigidBodyPortalVistor__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidBodyPortalVistor_DEFINED
struct RigidBodyPortalVistor__Class;
struct RigidBodyPortalVistor {
    struct RigidBodyPortalVistor__Class* klass;
    MonitorData* monitor;
    struct RigidBodyPortalVistor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidBodyPortalVistor_FWDDECL)
#define IL2CPP_STRUCT_RigidBodyPortalVistor_FWDDECL
#include <Modloader/app/structs/RigidBodyPortalVistor__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidBodyPortalVistor_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidBodyPortalVistor_DEFINED) && !defined(IL2CPP_STRUCT_RigidBodyPortalVistor_FWDDECL)
#include <Modloader/app/structs/RigidBodyPortalVistor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidBodyPortalVistor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
