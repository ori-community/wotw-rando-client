#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompositeTriggerCollider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompositeTriggerCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeTriggerCollider__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CompositeTriggerCollider__Fields_DEFINED
struct TriggerColliderCallback__Array;
struct HashSet_1_UnityEngine_Collider_;
struct List_1_UnityEngine_Component_;
struct CompositeTriggerCollider__Fields {
    struct MonoBehaviour__Fields _;
    struct TriggerColliderCallback__Array* TriggerColliderCallbacks;
    struct HashSet_1_UnityEngine_Collider_* OnTriggerEnter_Colliders;
    struct HashSet_1_UnityEngine_Collider_* OnTriggerStay_Colliders;
    struct HashSet_1_UnityEngine_Collider_* OnTriggerExit_Colliders;
    struct HashSet_1_UnityEngine_Collider_* ProcessedColliders_ThisFrame;
    struct HashSet_1_UnityEngine_Collider_* ProcessedColliders_LastFrame;
    struct List_1_UnityEngine_Component_* SiblingComponents;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompositeTriggerCollider__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompositeTriggerCollider__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/TriggerColliderCallback__Array.h>
#endif
#undef IL2CPP_STRUCT_CompositeTriggerCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeTriggerCollider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompositeTriggerCollider__Fields_FWDDECL)
#include <Modloader/app/structs/CompositeTriggerCollider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompositeTriggerCollider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
