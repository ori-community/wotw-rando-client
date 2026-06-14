#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_DEFINED
struct Condition_1;
struct GameObject;
struct MoonReference_1_UnityEngine_GameObject_;
struct ActivateBasedOnCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* Condition;
    struct GameObject* Target;
    struct MoonReference_1_UnityEngine_GameObject_* MoonTarget;
    bool Activate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivateBasedOnCondition__Fields_FWDDECL)
#include <Modloader/app/structs/ActivateBasedOnCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateBasedOnCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
