#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAbilityOnCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAbilityOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAbilityOnCondition__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_GetAbilityOnCondition__Fields_DEFINED
struct DesiredPlayerAbilityState;
struct Condition_1;
struct GetAbilityOnCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct DesiredPlayerAbilityState* Ability;
    struct Condition_1* Condition;
    bool CreateCheckpoint;
    struct CheckpointFunctionality Checkpoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAbilityOnCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetAbilityOnCondition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/DesiredPlayerAbilityState.h>
#endif
#undef IL2CPP_STRUCT_GetAbilityOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAbilityOnCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetAbilityOnCondition__Fields_FWDDECL)
#include <Modloader/app/structs/GetAbilityOnCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAbilityOnCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
