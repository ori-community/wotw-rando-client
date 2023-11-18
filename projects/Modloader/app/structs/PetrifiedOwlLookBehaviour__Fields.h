#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_DEFINED
struct PetrifiedOwlStats;
struct GameObject;
struct VectorAnimationParameter;
struct InverseKinematicsPostprocess;
struct MoonAnimator;
struct PetrifiedOwlLookBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float OffsetZ;
    float LookMaxSpeed;
    float LookDamp;
    struct PetrifiedOwlStats* Stats;
    struct GameObject* OwlAnimator;
    struct VectorAnimationParameter* HeadIKParameter;
    struct InverseKinematicsPostprocess* KinematicsPostProcess;
    float WeightChangeSpeed;
    struct MoonAnimator* m_animator;
    struct Vector3 m_lastLookPos;
    struct Vector3 m_velocity;
    bool m_startedTrackingOri;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InverseKinematicsPostprocess.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlLookBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlLookBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlLookBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
