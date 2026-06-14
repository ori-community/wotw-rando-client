#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickUp2Handed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickUp2Handed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickUp2Handed__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_PickUp2Handed__Fields_DEFINED
struct InteractionSystem;
struct InteractionObject;
struct Transform;
struct PickUp2Handed__Fields {
    struct MonoBehaviour__Fields _;
    int32_t GUIspace;
    struct InteractionSystem* interactionSystem;
    struct InteractionObject* obj;
    struct Transform* pivot;
    struct Transform* holdPoint;
    float pickUpTime;
    float holdWeight;
    float holdWeightVel;
    struct Vector3 pickUpPosition;
    struct Quaternion pickUpRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickUp2Handed__Fields_FWDDECL)
#define IL2CPP_STRUCT_PickUp2Handed__Fields_FWDDECL
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PickUp2Handed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickUp2Handed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PickUp2Handed__Fields_FWDDECL)
#include <Modloader/app/structs/PickUp2Handed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickUp2Handed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
