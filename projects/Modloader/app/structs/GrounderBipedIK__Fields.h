#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrounderBipedIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrounderBipedIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderBipedIK__Fields_DEFINED)
#include <Modloader/app/structs/Grounder__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Grounder__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GrounderBipedIK__Fields_DEFINED
struct BipedIK;
struct Transform__Array;
struct Quaternion__Array;
struct GrounderBipedIK__Fields {
    struct Grounder__Fields _;
    struct BipedIK* ik;
    float spineBend;
    float spineSpeed;
    struct Transform__Array* feet;
    struct Quaternion__Array* footRotations;
    struct Vector3 animatedPelvisLocalPosition;
    struct Vector3 solvedPelvisLocalPosition;
    struct Vector3 spineOffset;
    float lastWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrounderBipedIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrounderBipedIK__Fields_FWDDECL
#include <Modloader/app/structs/BipedIK.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_GrounderBipedIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrounderBipedIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrounderBipedIK__Fields_FWDDECL)
#include <Modloader/app/structs/GrounderBipedIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrounderBipedIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
