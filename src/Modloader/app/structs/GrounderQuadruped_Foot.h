#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrounderQuadruped_Foot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrounderQuadruped_Foot_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderQuadruped_Foot_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_GrounderQuadruped_Foot_DEFINED
struct IKSolver;
struct Transform;
struct Grounding_Leg;
struct GrounderQuadruped_Foot {
    struct IKSolver* solver;
    struct Transform* transform;
    struct Quaternion rotation;
    struct Grounding_Leg* leg;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrounderQuadruped_Foot_FWDDECL)
#define IL2CPP_STRUCT_GrounderQuadruped_Foot_FWDDECL
#include <Modloader/app/structs/Grounding_Leg.h>
#include <Modloader/app/structs/IKSolver.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GrounderQuadruped_Foot_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderQuadruped_Foot_DEFINED) && !defined(IL2CPP_STRUCT_GrounderQuadruped_Foot_FWDDECL)
#include <Modloader/app/structs/GrounderQuadruped_Foot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrounderQuadruped_Foot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
