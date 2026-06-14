#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBBIKSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBBIKSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FBBIKSettings__Fields_DEFINED
struct FullBodyBipedIK;
struct FBBIKSettings_Limb;
struct FBBIKSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK* ik;
    bool disableAfterStart;
    struct FBBIKSettings_Limb* leftArm;
    struct FBBIKSettings_Limb* rightArm;
    struct FBBIKSettings_Limb* leftLeg;
    struct FBBIKSettings_Limb* rightLeg;
    float rootPin;
    bool bodyEffectChildNodes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBBIKSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_FBBIKSettings__Fields_FWDDECL
#include <Modloader/app/structs/FBBIKSettings_Limb.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#endif
#undef IL2CPP_STRUCT_FBBIKSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBBIKSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FBBIKSettings__Fields_FWDDECL)
#include <Modloader/app/structs/FBBIKSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBBIKSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
