#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeStateOnCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeStateOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_ChangeStateOnCondition__Fields_DEFINED
struct Condition_1;
struct ChangeStateSetupHolder;
struct StateChangeDefinition;
struct ChangeStateOnCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* Condition;
    struct ChangeStateSetupHolder* StateChange;
    struct StateChangeDefinition* StateChangeOld;
    bool CreateCheckpointOnStateChange;
    struct CheckpointFunctionality Checkpoint;
    bool m_hasBeenUpgraded;
    bool m_hasBeenTriggered;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChangeStateOnCondition__Fields_FWDDECL
#include <Modloader/app/structs/ChangeStateSetupHolder.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/StateChangeDefinition.h>
#endif
#undef IL2CPP_STRUCT_ChangeStateOnCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateOnCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChangeStateOnCondition__Fields_FWDDECL)
#include <Modloader/app/structs/ChangeStateOnCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeStateOnCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
