#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshCollider_DEFINED)
#include <Modloader/app/structs/MeshCollider__Fields.h>
#if defined(IL2CPP_STRUCT_MeshCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_MeshCollider_DEFINED
struct MeshCollider__Class;
struct MeshCollider {
    struct MeshCollider__Class* klass;
    MonitorData* monitor;
    struct MeshCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshCollider_FWDDECL)
#define IL2CPP_STRUCT_MeshCollider_FWDDECL
#include <Modloader/app/structs/MeshCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_MeshCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshCollider_DEFINED) && !defined(IL2CPP_STRUCT_MeshCollider_FWDDECL)
#include <Modloader/app/structs/MeshCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
