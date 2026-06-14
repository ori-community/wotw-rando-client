#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsActiveCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsActiveCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsActiveCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/IsActiveCondition_Mode__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_IsActiveCondition_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_IsActiveCondition__Fields_DEFINED
struct GameObject;
struct MoonReference_1_UnityEngine_GameObject_;
struct IsActiveCondition__Fields {
    struct Condition_1__Fields _;
    struct GameObject* Target;
    struct MoonReference_1_UnityEngine_GameObject_* MoonTarget;
    bool Active;
    IsActiveCondition_Mode__Enum ActivationType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsActiveCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_IsActiveCondition__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_IsActiveCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsActiveCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IsActiveCondition__Fields_FWDDECL)
#include <Modloader/app/structs/IsActiveCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsActiveCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
