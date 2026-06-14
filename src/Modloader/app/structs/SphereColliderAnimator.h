#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SphereColliderAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SphereColliderAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphereColliderAnimator_DEFINED)
#include <Modloader/app/structs/SphereColliderAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_SphereColliderAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SphereColliderAnimator_DEFINED
struct SphereColliderAnimator__Class;
struct SphereColliderAnimator {
    struct SphereColliderAnimator__Class* klass;
    MonitorData* monitor;
    struct SphereColliderAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SphereColliderAnimator_FWDDECL)
#define IL2CPP_STRUCT_SphereColliderAnimator_FWDDECL
#include <Modloader/app/structs/SphereColliderAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_SphereColliderAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphereColliderAnimator_DEFINED) && !defined(IL2CPP_STRUCT_SphereColliderAnimator_FWDDECL)
#include <Modloader/app/structs/SphereColliderAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SphereColliderAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
