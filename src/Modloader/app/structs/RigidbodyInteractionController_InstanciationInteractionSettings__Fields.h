#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationPositionModes__Enum.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationPositionModes__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_DEFINED
struct GameObject;
struct LocalSpacePointSet;
struct __declspec(align(8)) RigidbodyInteractionController_InstanciationInteractionSettings__Fields {
    float MinCollisionMagnitude;
    struct LayerMask InteractableLayers;
    struct GameObject* CollisionPrefab;
    RigidbodyInteractionController_InstanciationPositionModes__Enum InstanciationPosition;

    struct LocalSpacePointSet* InteractionPoints;
    struct Rect ParticleEmissionRemapping;
    int32_t PrewarmAmount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LocalSpacePointSet.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyInteractionController_InstanciationInteractionSettings__Fields_FWDDECL)
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyInteractionController_InstanciationInteractionSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
