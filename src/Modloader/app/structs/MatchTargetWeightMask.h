#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchTargetWeightMask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchTargetWeightMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchTargetWeightMask_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MatchTargetWeightMask_DEFINED
struct MatchTargetWeightMask {
    struct Vector3 m_PositionXYZWeight;
    float m_RotationWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchTargetWeightMask_FWDDECL)
#define IL2CPP_STRUCT_MatchTargetWeightMask_FWDDECL
#endif
#undef IL2CPP_STRUCT_MatchTargetWeightMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchTargetWeightMask_DEFINED) && !defined(IL2CPP_STRUCT_MatchTargetWeightMask_FWDDECL)
#include <Modloader/app/structs/MatchTargetWeightMask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchTargetWeightMask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
