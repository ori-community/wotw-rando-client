#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletSphereCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletSphereCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSphereCollider_DEFINED)
#include <Modloader/app/structs/VerletSphereCollider__Fields.h>
#if defined(IL2CPP_STRUCT_VerletSphereCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletSphereCollider_DEFINED
struct VerletSphereCollider__Class;
struct VerletSphereCollider {
    struct VerletSphereCollider__Class* klass;
    MonitorData* monitor;
    struct VerletSphereCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletSphereCollider_FWDDECL)
#define IL2CPP_STRUCT_VerletSphereCollider_FWDDECL
#include <Modloader/app/structs/VerletSphereCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletSphereCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSphereCollider_DEFINED) && !defined(IL2CPP_STRUCT_VerletSphereCollider_FWDDECL)
#include <Modloader/app/structs/VerletSphereCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletSphereCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
