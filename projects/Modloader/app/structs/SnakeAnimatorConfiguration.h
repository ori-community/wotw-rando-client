#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnakeAnimatorConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnakeAnimatorConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeAnimatorConfiguration_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SnakeAnimatorConfiguration_DEFINED
struct Transform;
struct SnakeAnimatorConfiguration {
    struct Transform* Target;
    struct Transform* Root;
    int32_t SolverIterationCount;
    float BodyStretch;
    float MaxJointAngle;
    float AngleRestrictSpeed;
    struct Vector3 PositionOffset;
    bool UseTipAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnakeAnimatorConfiguration_FWDDECL)
#define IL2CPP_STRUCT_SnakeAnimatorConfiguration_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SnakeAnimatorConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeAnimatorConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_SnakeAnimatorConfiguration_FWDDECL)
#include <Modloader/app/structs/SnakeAnimatorConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnakeAnimatorConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
