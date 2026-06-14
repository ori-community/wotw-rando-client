#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorController3rdPerson__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimatorController3rdPerson__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_DEFINED
struct AimIK;
struct FullBodyBipedIK;
struct AnimatorController3rdPersonIK__Fields {
    struct AnimatorController3rdPerson__Fields _;
    bool useIK;
    float headLookWeight;
    struct Vector3 gunHoldOffset;
    struct Vector3 leftHandOffset;
    struct AimIK* aim;
    struct FullBodyBipedIK* ik;
    struct Vector3 headLookAxis;
    struct Vector3 leftHandPosRelToRightHand;
    struct Quaternion leftHandRotRelToRightHand;
    struct Vector3 aimTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_FWDDECL
#include <Modloader/app/structs/AimIK.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#endif
#undef IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorController3rdPersonIK__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatorController3rdPersonIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorController3rdPersonIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
