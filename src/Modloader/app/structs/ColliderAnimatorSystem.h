#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColliderAnimatorSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColliderAnimatorSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderAnimatorSystem_DEFINED)
#include <Modloader/app/structs/ColliderAnimatorSystem__Fields.h>
#if defined(IL2CPP_STRUCT_ColliderAnimatorSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_ColliderAnimatorSystem_DEFINED
struct ColliderAnimatorSystem__Class;
struct ColliderAnimatorSystem {
    struct ColliderAnimatorSystem__Class* klass;
    MonitorData* monitor;
    struct ColliderAnimatorSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColliderAnimatorSystem_FWDDECL)
#define IL2CPP_STRUCT_ColliderAnimatorSystem_FWDDECL
#include <Modloader/app/structs/ColliderAnimatorSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_ColliderAnimatorSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderAnimatorSystem_DEFINED) && !defined(IL2CPP_STRUCT_ColliderAnimatorSystem_FWDDECL)
#include <Modloader/app/structs/ColliderAnimatorSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColliderAnimatorSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
