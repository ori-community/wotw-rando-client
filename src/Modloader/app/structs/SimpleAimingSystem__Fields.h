#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleAimingSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleAimingSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAimingSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleAimingSystem__Fields_DEFINED
struct AimPoser;
struct AimIK;
struct LookAtIK;
struct Animator;
struct AimPoser_Pose;
struct SimpleAimingSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct AimPoser* aimPoser;
    struct AimIK* aim;
    struct LookAtIK* lookAt;
    struct Animator* animator;
    float crossfadeTime;
    float minAimDistance;
    struct AimPoser_Pose* aimPose;
    struct AimPoser_Pose* lastPose;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleAimingSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleAimingSystem__Fields_FWDDECL
#include <Modloader/app/structs/AimIK.h>
#include <Modloader/app/structs/AimPoser.h>
#include <Modloader/app/structs/AimPoser_Pose.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/LookAtIK.h>
#endif
#undef IL2CPP_STRUCT_SimpleAimingSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAimingSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleAimingSystem__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleAimingSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleAimingSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
