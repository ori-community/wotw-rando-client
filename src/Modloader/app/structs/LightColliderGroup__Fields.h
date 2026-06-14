#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightColliderGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightColliderGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightColliderGroup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LightColliderGroup__Fields_DEFINED
struct List_1_UnityEngine_Collider_;
struct List_1_UnityEngine_Vector3_;
struct LightColliderGroup__Fields {
    struct MonoBehaviour__Fields _;
    bool InsideLight;
    bool Dynamic;
    struct List_1_UnityEngine_Collider_* m_colliders;
    struct List_1_UnityEngine_Vector3_* m_centers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightColliderGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightColliderGroup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#endif
#undef IL2CPP_STRUCT_LightColliderGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightColliderGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightColliderGroup__Fields_FWDDECL)
#include <Modloader/app/structs/LightColliderGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightColliderGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
