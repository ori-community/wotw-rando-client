#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_DEFINED
struct Predicate_1_UnityEngine_Collider_;
struct SteeringForcesSettings;
struct RaycastHit__Array;
struct __declspec(align(8)) SteeringForces_SteeringForcesBuilder__Fields {
    struct Predicate_1_UnityEngine_Collider_* ColliderValid;
    struct Vector3 m_finalForce;
    struct SteeringForcesSettings* m_settings;
    struct RaycastHit__Array* m_hitInfos;
    int32_t m_sequenceIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_FWDDECL
#include <Modloader/app/structs/Predicate_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SteeringForcesSettings.h>
#endif
#undef IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SteeringForces_SteeringForcesBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/SteeringForces_SteeringForcesBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteeringForces_SteeringForcesBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
