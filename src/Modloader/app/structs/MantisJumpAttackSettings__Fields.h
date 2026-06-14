#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_DEFINED
struct MantisJumpAttackSettings_Settings;
struct MoonReference_1_UnityEngine_Transform_;
struct MantisJumpAttackSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct MantisJumpAttackSettings_Settings* NoAOE;
    struct MoonReference_1_UnityEngine_Transform_* InstantiationLocation;
    struct Vector3 InstantiationOffset;
    bool ApplyRotation;
    bool ProjectOnGround;
    bool ProjectYOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_FWDDECL
#include <Modloader/app/structs/MantisJumpAttackSettings_Settings.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MantisJumpAttackSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MantisJumpAttackSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisJumpAttackSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
