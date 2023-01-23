#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystem__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_InteractionSystem__Fields_DEFINED
struct String;
struct Collider;
struct Transform;
struct List_1_RootMotion_FinalIK_InteractionTrigger_;
struct List_1_System_Int32_;
struct InteractionSystem_InteractionDelegate;
struct InteractionSystem_InteractionEventDelegate;
struct FullBodyBipedIK;
struct InteractionLookAt;
struct InteractionEffector__Array;
struct InteractionSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct String* targetTag;
    float fadeInTime;
    float speed;
    float resetToDefaultsSpeed;
    struct Collider* characterCollider;
    struct Transform* FPSCamera;
    struct LayerMask camRaycastLayers;
    float camRaycastDistance;
    struct List_1_RootMotion_FinalIK_InteractionTrigger_* _triggersInRange_k__BackingField;
    struct List_1_RootMotion_FinalIK_InteractionTrigger_* inContact;
    struct List_1_System_Int32_* bestRangeIndexes;
    struct InteractionSystem_InteractionDelegate* OnInteractionStart;
    struct InteractionSystem_InteractionDelegate* OnInteractionPause;
    struct InteractionSystem_InteractionDelegate* OnInteractionPickUp;
    struct InteractionSystem_InteractionDelegate* OnInteractionResume;
    struct InteractionSystem_InteractionDelegate* OnInteractionStop;
    struct InteractionSystem_InteractionEventDelegate* OnInteractionEvent;
    struct RaycastHit raycastHit;
    struct FullBodyBipedIK* fullBody;
    struct InteractionLookAt* lookAt;
    struct InteractionEffector__Array* interactionEffectors;
    bool initiated;
    struct Collider* lastCollider;
    struct Collider* c;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionSystem__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/InteractionEffector__Array.h>
#include <Modloader/app/structs/InteractionLookAt.h>
#include <Modloader/app/structs/InteractionSystem_InteractionDelegate.h>
#include <Modloader/app/structs/InteractionSystem_InteractionEventDelegate.h>
#include <Modloader/app/structs/List_1_RootMotion_FinalIK_InteractionTrigger_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_InteractionSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionSystem__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
