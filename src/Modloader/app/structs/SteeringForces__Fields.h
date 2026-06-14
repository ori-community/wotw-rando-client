#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteeringForces__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteeringForces__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForces__Fields_DEFINED)
#define IL2CPP_STRUCT_SteeringForces__Fields_DEFINED
struct SteeringForcesSettings;
struct SteeringForces_SteeringForcesBuilder;
struct List_1_UnityEngine_Color_;
struct __declspec(align(8)) SteeringForces__Fields {
    bool ShouldDrawGizmos;
    struct SteeringForcesSettings* Settings;
    struct SteeringForces_SteeringForcesBuilder* m_builder;
    struct List_1_UnityEngine_Color_* m_debugColors;
};
#endif
#if !defined(IL2CPP_STRUCT_SteeringForces__Fields_FWDDECL)
#define IL2CPP_STRUCT_SteeringForces__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/SteeringForcesSettings.h>
#include <Modloader/app/structs/SteeringForces_SteeringForcesBuilder.h>
#endif
#undef IL2CPP_STRUCT_SteeringForces__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForces__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SteeringForces__Fields_FWDDECL)
#include <Modloader/app/structs/SteeringForces__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteeringForces__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
