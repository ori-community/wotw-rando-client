#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_DEFINED
struct Condition_1;
struct List_1_Moon_Setups_ChangeStateSetupHolder_;
struct ChangeMultipleStatesOnCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* Condition;
    struct List_1_Moon_Setups_ChangeStateSetupHolder_* StateChanges;
    bool CreateCheckpointOnStateChange;
    struct CheckpointFunctionality Checkpoint;
    bool m_hasBeenUpgraded;
    bool m_hasBeenTriggered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/List_1_Moon_Setups_ChangeStateSetupHolder_.h>
#endif
#undef IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChangeMultipleStatesOnCondition__Fields_FWDDECL)
#include <Modloader/app/structs/ChangeMultipleStatesOnCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeMultipleStatesOnCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
