#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_DEFINED
struct Collider;
struct OneWayCapsuleCollider_ColliderEntry {
    struct Collider* Collider;
    struct LayerMask Mask_1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_FWDDECL)
#define IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_FWDDECL
#include <Modloader/app/structs/Collider.h>
#endif
#undef IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_DEFINED) && !defined(IL2CPP_STRUCT_OneWayCapsuleCollider_ColliderEntry_FWDDECL)
#include <Modloader/app/structs/OneWayCapsuleCollider_ColliderEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneWayCapsuleCollider_ColliderEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
