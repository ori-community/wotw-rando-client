#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColliderMask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColliderMask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderMask__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_ColliderMask__Fields_DEFINED
struct List_1_UnityEngine_Collider_;
struct ColliderMask__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Collider_* Colliders;
    struct LayerMask LayerToIgnore;
    struct List_1_UnityEngine_Collider_* m_intersectingColliders;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColliderMask__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColliderMask__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#endif
#undef IL2CPP_STRUCT_ColliderMask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColliderMask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColliderMask__Fields_FWDDECL)
#include <Modloader/app/structs/ColliderMask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColliderMask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
