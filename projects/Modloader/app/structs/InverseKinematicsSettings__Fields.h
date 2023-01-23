#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InverseKinematicsSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InverseKinematicsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsSettings__Fields_DEFINED)
#include <Modloader/app/structs/AnimationMaskNode__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationMaskNode__Fields_DEFINED)
#define IL2CPP_STRUCT_InverseKinematicsSettings__Fields_DEFINED
struct InverseKinematicsSolver_AngleRestriction;
struct InverseKinematicsSettings__Fields {
    struct AnimationMaskNode__Fields _;
    struct InverseKinematicsSolver_AngleRestriction* AngleRestrictions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InverseKinematicsSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_InverseKinematicsSettings__Fields_FWDDECL
#include <Modloader/app/structs/InverseKinematicsSolver_AngleRestriction.h>
#endif
#undef IL2CPP_STRUCT_InverseKinematicsSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InverseKinematicsSettings__Fields_FWDDECL)
#include <Modloader/app/structs/InverseKinematicsSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InverseKinematicsSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
