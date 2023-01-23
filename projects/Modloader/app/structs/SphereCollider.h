#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SphereCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SphereCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphereCollider_DEFINED)
#include <Modloader/app/structs/SphereCollider__Fields.h>
#if defined(IL2CPP_STRUCT_SphereCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_SphereCollider_DEFINED
struct SphereCollider__Class;
struct SphereCollider {
    struct SphereCollider__Class* klass;
    MonitorData* monitor;
    struct SphereCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SphereCollider_FWDDECL)
#define IL2CPP_STRUCT_SphereCollider_FWDDECL
#include <Modloader/app/structs/SphereCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_SphereCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphereCollider_DEFINED) && !defined(IL2CPP_STRUCT_SphereCollider_FWDDECL)
#include <Modloader/app/structs/SphereCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SphereCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
