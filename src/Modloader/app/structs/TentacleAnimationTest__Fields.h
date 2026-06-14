#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleAnimationTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleAnimationTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimationTest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TentacleAnimationTest__Fields_DEFINED
struct List_1_UnityEngine_Transform_;
struct VerletStructure;
struct TentacleAnimationPostprocess;
struct Transform;
struct MoonTimeline;
struct TentacleAnimationTest__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Transform_* boneTransforms;
    struct VerletStructure* verletStructure;
    struct TentacleAnimationPostprocess* animationPostprocess;
    struct Transform* referenceTargetTransform;
    struct Transform* attackTargetTransform;
    struct MoonTimeline* attackTimeline;
    float attackDelay;
    float positionAlignmentP;
    float angularAlignmentP;
    float alignmentD;
    float ZAligment;
    float Zfriction;
    float m_attackTime;
    struct Vector3 m_startPos;
    struct Vector3 m_referenceEndPos;
    struct Vector3 m_targetPos;
    struct Vector3 m_referenceTangent;
    struct Vector3 m_referenceNormal;
    struct Vector3 m_targetTangent;
    struct Vector3 m_targetNormal;
    float m_targetTangentScaling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleAnimationTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleAnimationTest__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TentacleAnimationPostprocess.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletStructure.h>
#endif
#undef IL2CPP_STRUCT_TentacleAnimationTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimationTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleAnimationTest__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleAnimationTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleAnimationTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
