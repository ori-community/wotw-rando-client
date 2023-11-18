#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerBoxCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerBoxCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerBoxCollider_DEFINED)
#include <Modloader/app/structs/ServerBoxCollider__Fields.h>
#if defined(IL2CPP_STRUCT_ServerBoxCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerBoxCollider_DEFINED
struct ServerBoxCollider__Class;
struct ServerBoxCollider {
    struct ServerBoxCollider__Class* klass;
    MonitorData* monitor;
    struct ServerBoxCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerBoxCollider_FWDDECL)
#define IL2CPP_STRUCT_ServerBoxCollider_FWDDECL
#include <Modloader/app/structs/ServerBoxCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerBoxCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerBoxCollider_DEFINED) && !defined(IL2CPP_STRUCT_ServerBoxCollider_FWDDECL)
#include <Modloader/app/structs/ServerBoxCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerBoxCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
