#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionEffector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionEffector__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_InteractionEffector__Fields_DEFINED
struct InteractionObject;
struct Poser;
struct IKEffector;
struct InteractionTarget;
struct Transform;
struct List_1_System_Boolean_;
struct InteractionSystem;
struct __declspec(align(8)) InteractionEffector__Fields {
    FullBodyBipedEffector__Enum _effectorType_k__BackingField;

    bool _isPaused_k__BackingField;
    struct InteractionObject* _interactionObject_k__BackingField;
    struct Poser* poser;
    struct IKEffector* effector;
    float timer;
    float length;
    float weight;
    float fadeInSpeed;
    float defaultPositionWeight;
    float defaultRotationWeight;
    float defaultPull;
    float defaultReach;
    float defaultPush;
    float defaultPushParent;
    float resetTimer;
    bool positionWeightUsed;
    bool rotationWeightUsed;
    bool pullUsed;
    bool reachUsed;
    bool pushUsed;
    bool pushParentUsed;
    bool pickedUp;
    bool defaults;
    bool pickUpOnPostFBBIK;
    struct Vector3 pickUpPosition;
    struct Vector3 pausePositionRelative;
    struct Quaternion pickUpRotation;
    struct Quaternion pauseRotationRelative;
    struct InteractionTarget* interactionTarget;
    struct Transform* target;
    struct List_1_System_Boolean_* triggered;
    struct InteractionSystem* interactionSystem;
    bool started;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionEffector__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionEffector__Fields_FWDDECL
#include <Modloader/app/structs/IKEffector.h>
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/InteractionTarget.h>
#include <Modloader/app/structs/List_1_System_Boolean_.h>
#include <Modloader/app/structs/Poser.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_InteractionEffector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionEffector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionEffector__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionEffector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionEffector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
