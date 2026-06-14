#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteeringForcesSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteeringForcesSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForcesSettings__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_SteeringForcesSettings__Fields_DEFINED
struct List_1_SteeringForcesAngleAvoidanceSettings_;
struct __declspec(align(8)) SteeringForcesSettings__Fields {
    struct LayerMask CollisionMask;
    float NoiseScale;
    float NoiseFrequency;
    bool ApplyForcesInSequence;
    struct List_1_SteeringForcesAngleAvoidanceSettings_* AngleAvoidance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteeringForcesSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SteeringForcesSettings__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SteeringForcesAngleAvoidanceSettings_.h>
#endif
#undef IL2CPP_STRUCT_SteeringForcesSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForcesSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SteeringForcesSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SteeringForcesSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteeringForcesSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
