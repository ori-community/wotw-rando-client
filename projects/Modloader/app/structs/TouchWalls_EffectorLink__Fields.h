#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_DEFINED
struct InteractionObject;
struct Transform;
struct __declspec(align(8)) TouchWalls_EffectorLink__Fields {
    bool enabled;
    FullBodyBipedEffector__Enum effectorType;

    struct InteractionObject* interactionObject;
    struct Transform* spherecastFrom;
    float spherecastRadius;
    float minDistance;
    struct LayerMask touchLayers;
    float lerpSpeed;
    float minSwitchTime;
    float releaseDistance;
    bool sliding;
    struct Vector3 raycastDirectionLocal;
    float raycastDistance;
    bool inTouch;
    struct RaycastHit hit;
    struct Vector3 targetPosition;
    struct Quaternion targetRotation;
    bool initiated;
    float nextSwitchTime;
    float speedF;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_FWDDECL)
#define IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_FWDDECL
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TouchWalls_EffectorLink__Fields_FWDDECL)
#include <Modloader/app/structs/TouchWalls_EffectorLink__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TouchWalls_EffectorLink__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
