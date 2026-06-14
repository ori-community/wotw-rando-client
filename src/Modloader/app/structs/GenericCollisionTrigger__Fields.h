#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericCollisionTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericCollisionTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericCollisionTrigger__Fields_DEFINED)
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericCollisionTrigger__Fields_DEFINED
struct CollisionTriggerSetupHolder;
struct List_1_UnityEngine_GameObject_;
struct List_1_UnityEngine_Collider_;
struct IUberState__Array;
struct GenericCollisionTrigger__Fields {
    struct LegacyTrigger__Fields _;
    struct CollisionTriggerSetupHolder* Setup;
    struct List_1_UnityEngine_GameObject_* TriggeringObjects;
    struct List_1_UnityEngine_Collider_* IgnoreColliders;
    bool OnTrigger;
    bool OnCollision;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericCollisionTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericCollisionTrigger__Fields_FWDDECL
#include <Modloader/app/structs/CollisionTriggerSetupHolder.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_GenericCollisionTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericCollisionTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericCollisionTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/GenericCollisionTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericCollisionTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
