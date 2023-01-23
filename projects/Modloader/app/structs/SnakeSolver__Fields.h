#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnakeSolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnakeSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeSolver__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SnakeSolver_BaseFixType__Enum.h>
#include <Modloader/app/structs/SnakeSolver_JointAngleRestrictType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SnakeSolver_BaseFixType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SnakeSolver_JointAngleRestrictType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SnakeSolver__Fields_DEFINED
struct Transform;
struct List_1_SnakeSolver_JointEntry_;
struct Vector2__Array;
struct SnakeSolver__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Target;
    struct List_1_SnakeSolver_JointEntry_* Joints;
    int32_t Iterations;
    bool UseTipAngle;
    bool UseBaseAngle;
    SnakeSolver_BaseFixType__Enum FixType;

    float BodyStretch;
    SnakeSolver_JointAngleRestrictType__Enum Restrict;

    float MaxJointAngle;
    float AngleRestrictSpeed;
    struct Color DrawColor;
    struct Vector2__Array* m_path;
    float m_pTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnakeSolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnakeSolver__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SnakeSolver_JointEntry_.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2__Array.h>
#endif
#undef IL2CPP_STRUCT_SnakeSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnakeSolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnakeSolver__Fields_FWDDECL)
#include <Modloader/app/structs/SnakeSolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnakeSolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
