#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBIKBendGoal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBIKBendGoal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKBendGoal__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedChain__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FullBodyBipedChain__Enum_DEFINED)
#define IL2CPP_STRUCT_FBIKBendGoal__Fields_DEFINED
struct FullBodyBipedIK;
struct FBIKBendGoal__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK* ik;
    FullBodyBipedChain__Enum chain;

    float weight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBIKBendGoal__Fields_FWDDECL)
#define IL2CPP_STRUCT_FBIKBendGoal__Fields_FWDDECL
#include <Modloader/app/structs/FullBodyBipedIK.h>
#endif
#undef IL2CPP_STRUCT_FBIKBendGoal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKBendGoal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FBIKBendGoal__Fields_FWDDECL)
#include <Modloader/app/structs/FBIKBendGoal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBIKBendGoal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
