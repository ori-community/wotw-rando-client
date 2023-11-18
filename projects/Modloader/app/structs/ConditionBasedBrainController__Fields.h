#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionBasedBrainController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionBasedBrainController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionBasedBrainController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionBasedBrainController__Fields_DEFINED
struct Condition_1;
struct Enum__Array;
struct ConditionBasedBrainController__Fields {
    struct MonoBehaviour__Fields _;
    bool Skip;
    struct Condition_1* Condition;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionBasedBrainController__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConditionBasedBrainController__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_ConditionBasedBrainController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionBasedBrainController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConditionBasedBrainController__Fields_FWDDECL)
#include <Modloader/app/structs/ConditionBasedBrainController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionBasedBrainController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
