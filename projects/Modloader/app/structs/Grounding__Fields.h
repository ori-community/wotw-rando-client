#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Grounding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Grounding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounding__Fields_DEFINED)
#include <Modloader/app/structs/Grounding_Quality__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/RaycastHit.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Grounding_Quality__Enum_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_Grounding__Fields_DEFINED
struct Grounding_Leg__Array;
struct Grounding_Pelvis;
struct Transform;
struct __declspec(align(8)) Grounding__Fields {
    struct LayerMask layers;
    float maxStep;
    float heightOffset;
    float footSpeed;
    float footRadius;
    float prediction;
    float footRotationWeight;
    float footRotationSpeed;
    float maxFootRotationAngle;
    bool rotateSolver;
    float pelvisSpeed;
    float pelvisDamper;
    float lowerPelvisWeight;
    float liftPelvisWeight;
    float rootSphereCastRadius;
    Grounding_Quality__Enum quality;

    struct Grounding_Leg__Array* _legs_k__BackingField;
    struct Grounding_Pelvis* _pelvis_k__BackingField;
    bool _isGrounded_k__BackingField;
    struct Transform* _root_k__BackingField;
    struct RaycastHit _rootHit_k__BackingField;
    bool initiated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Grounding__Fields_FWDDECL)
#define IL2CPP_STRUCT_Grounding__Fields_FWDDECL
#include <Modloader/app/structs/Grounding_Leg__Array.h>
#include <Modloader/app/structs/Grounding_Pelvis.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Grounding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grounding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Grounding__Fields_FWDDECL)
#include <Modloader/app/structs/Grounding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Grounding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
