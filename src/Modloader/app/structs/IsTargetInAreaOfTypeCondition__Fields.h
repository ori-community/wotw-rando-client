#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition__Fields.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#if defined(IL2CPP_STRUCT_Condition__Fields_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED)
#define IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct IsTargetInAreaOfTypeCondition__Fields {
    struct Condition__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* CheckTarget;
    NavigationType__Enum AreaType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IsTargetInAreaOfTypeCondition__Fields_FWDDECL)
#include <Modloader/app/structs/IsTargetInAreaOfTypeCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsTargetInAreaOfTypeCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
