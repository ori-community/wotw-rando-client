#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerUIMesh__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerUIMesh__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIMesh__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/PointerUIBase__Fields.h>
#if defined(IL2CPP_STRUCT_PointerUIBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_PointerUIMesh__Fields_DEFINED
struct MeshCollider;
struct Dictionary_2_System_Int32_UnityEngine_RaycastHit_;
struct PointerUIMesh__Fields {
    struct PointerUIBase__Fields _;
    struct LayerMask layerMask;
    struct MeshCollider* meshCollider;
    struct Dictionary_2_System_Int32_UnityEngine_RaycastHit_* rayHits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerUIMesh__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointerUIMesh__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/MeshCollider.h>
#endif
#undef IL2CPP_STRUCT_PointerUIMesh__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIMesh__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointerUIMesh__Fields_FWDDECL)
#include <Modloader/app/structs/PointerUIMesh__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerUIMesh__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
