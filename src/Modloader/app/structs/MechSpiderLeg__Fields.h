#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MechSpiderLeg__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MechSpiderLeg__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderLeg__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_MechSpiderLeg__Fields_DEFINED
struct MechSpider;
struct MechSpiderLeg;
struct AnimationCurve;
struct ParticleSystem;
struct IK;
struct MechSpiderLeg__Fields {
    struct MonoBehaviour__Fields _;
    struct MechSpider* mechSpider;
    struct MechSpiderLeg* unSync;
    struct Vector3 offset;
    float minDelay;
    float maxOffset;
    float stepSpeed;
    float footHeight;
    float velocityPrediction;
    float raycastFocus;
    struct AnimationCurve* yOffset;
    struct ParticleSystem* sand;
    struct IK* ik;
    float stepProgress;
    float lastStepTime;
    struct Vector3 defaultPosition;
    struct RaycastHit hit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MechSpiderLeg__Fields_FWDDECL)
#define IL2CPP_STRUCT_MechSpiderLeg__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/IK.h>
#include <Modloader/app/structs/MechSpider.h>
#include <Modloader/app/structs/MechSpiderLeg.h>
#include <Modloader/app/structs/ParticleSystem.h>
#endif
#undef IL2CPP_STRUCT_MechSpiderLeg__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderLeg__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MechSpiderLeg__Fields_FWDDECL)
#include <Modloader/app/structs/MechSpiderLeg__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MechSpiderLeg__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
