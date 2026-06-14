#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTarget__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTarget__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_InteractionTarget__Fields_DEFINED
struct InteractionTarget_Multiplier__Array;
struct Transform;
struct InteractionTarget__Fields {
    struct MonoBehaviour__Fields _;
    FullBodyBipedEffector__Enum effectorType;

    struct InteractionTarget_Multiplier__Array* multipliers;
    float interactionSpeedMlp;
    struct Transform* pivot;
    struct Vector3 twistAxis;
    float twistWeight;
    float swingWeight;
    bool rotateOnce;
    struct Quaternion defaultLocalRotation;
    struct Transform* lastPivot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionTarget__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionTarget__Fields_FWDDECL
#include <Modloader/app/structs/InteractionTarget_Multiplier__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_InteractionTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTarget__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTarget__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionTarget__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTarget__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
