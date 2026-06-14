#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/OneWayCapsuleCollider_OneWayDirection__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_OneWayCapsuleCollider_OneWayDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_DEFINED
struct List_1_OneWayCapsuleCollider_ColliderEntry_;
struct Dictionary_2_UnityEngine_Collider_System_Int32_;
struct Transform;
struct CapsuleCollider;
struct BoxCollider;
struct OneWayCapsuleCollider__Fields {
    struct MonoBehaviour__Fields _;
    OneWayCapsuleCollider_OneWayDirection__Enum CollisionDirectionType;

    float Tolerance;
    float TriggerExpand;
    struct LayerMask CollisionMask;
    struct List_1_OneWayCapsuleCollider_ColliderEntry_* m_ignoredColliders;
    struct Dictionary_2_UnityEngine_Collider_System_Int32_* m_ignoredCollidersMap;
    struct Transform* m_transform;
    struct CapsuleCollider* m_collider;
    struct BoxCollider* m_trigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_FWDDECL)
#define IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_FWDDECL
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Collider_System_Int32_.h>
#include <Modloader/app/structs/List_1_OneWayCapsuleCollider_ColliderEntry_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_FWDDECL)
#include <Modloader/app/structs/OneWayCapsuleCollider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneWayCapsuleCollider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
