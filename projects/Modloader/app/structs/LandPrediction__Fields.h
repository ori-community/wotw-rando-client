#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LandPrediction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LandPrediction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandPrediction__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/RaycastHit.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_LandPrediction__Fields_DEFINED
struct PlatformMovement;
struct Action_1_UnityEngine_RaycastHit_;
struct __declspec(align(8)) LandPrediction__Fields {
    float LandAntecipationTime;
    struct LayerMask CollisionMask;
    struct PlatformMovement* m_plataformMovement;
    struct Action_1_UnityEngine_RaycastHit_* m_onGroundDetection;
    struct RaycastHit m_hit;
    bool _GroundDetected_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LandPrediction__Fields_FWDDECL)
#define IL2CPP_STRUCT_LandPrediction__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/PlatformMovement.h>
#endif
#undef IL2CPP_STRUCT_LandPrediction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandPrediction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LandPrediction__Fields_FWDDECL)
#include <Modloader/app/structs/LandPrediction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LandPrediction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
