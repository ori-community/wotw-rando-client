#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_DEFINED)
#include <Modloader/app/structs/QuestNodeSetup_RewardType__Enum.h>
#if defined(IL2CPP_STRUCT_QuestNodeSetup_RewardType__Enum_DEFINED)
#define IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_DEFINED
struct ConditionUberState;
struct MessageProvider;
struct DesiredUberStateComposite;
struct __declspec(align(8)) QuestNodeSetup_QuestInteraction__Fields {
    bool LocationIndependent;
    bool TopPriority;
    bool InvertCondition;
    struct ConditionUberState* Condition;
    struct MessageProvider* MessageProvider;
    bool IncrementQuestUberState;
    bool Autocontinue;
    struct DesiredUberStateComposite* StateChange;
    QuestNodeSetup_RewardType__Enum Reward;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteraction__Fields_FWDDECL)
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
