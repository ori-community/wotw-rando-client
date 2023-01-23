#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrounderQuadruped__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrounderQuadruped__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderQuadruped__Fields_DEFINED)
#include <Modloader/app/structs/Grounder__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Grounder__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_GrounderQuadruped__Fields_DEFINED
struct Grounding;
struct Transform;
struct IK__Array;
struct GrounderQuadruped_Foot__Array;
struct GrounderQuadruped__Fields {
    struct Grounder__Fields _;
    struct Grounding* forelegSolver;
    float rootRotationWeight;
    float minRootRotation;
    float maxRootRotation;
    float rootRotationSpeed;
    float maxLegOffset;
    float maxForeLegOffset;
    float maintainHeadRotationWeight;
    struct Transform* characterRoot;
    struct Transform* pelvis;
    struct Transform* lastSpineBone;
    struct Transform* head;
    struct IK__Array* legs;
    struct IK__Array* forelegs;
    struct Vector3 gravity;
    struct GrounderQuadruped_Foot__Array* feet;
    struct Vector3 animatedPelvisLocalPosition;
    struct Quaternion animatedPelvisLocalRotation;
    struct Quaternion animatedHeadLocalRotation;
    struct Vector3 solvedPelvisLocalPosition;
    struct Quaternion solvedPelvisLocalRotation;
    struct Quaternion solvedHeadLocalRotation;
    int32_t solvedFeet;
    bool solved;
    float angle;
    struct Transform* forefeetRoot;
    struct Quaternion headRotation;
    float lastWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrounderQuadruped__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrounderQuadruped__Fields_FWDDECL
#include <Modloader/app/structs/GrounderQuadruped_Foot__Array.h>
#include <Modloader/app/structs/Grounding.h>
#include <Modloader/app/structs/IK__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GrounderQuadruped__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderQuadruped__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrounderQuadruped__Fields_FWDDECL)
#include <Modloader/app/structs/GrounderQuadruped__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrounderQuadruped__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
