#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineCombat__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineCombat__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ShrineCombat__Fields_DEFINED
struct MessageProvider;
struct EnemyArenaController;
struct GameObject;
struct CollectablePlaceholder;
struct CageStructureTool;
struct MoonTimeline;
struct State;
struct List_1_ShrineCombat_WaveProgressMarker_;
struct StateMachine_2;
struct ShrineCombat_States;
struct MessageBox;
struct IUberState__Array;
struct Dictionary_2_System_Int32_System_String_;
struct ShrineCombat__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* PressButtonToStartMessage;
    float InteractionRadius;
    struct EnemyArenaController* ArenaController;
    struct GameObject* RewardsParent;
    struct CollectablePlaceholder* m_collectablePlaceholder;
    struct CageStructureTool* AllowedArea;
    struct MoonTimeline* OnCombatStartedTimeline;
    struct MoonTimeline* OnCombatCompletedFirstTimeTimeline;
    struct MoonTimeline* OnCombatCompletedReplayTimeline;
    struct State* CombatStartState;
    struct State* CombatEndState;
    struct List_1_ShrineCombat_WaveProgressMarker_* WaveProgressMarkers;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;

    struct StateMachine_2* m_stateMachine;
    struct ShrineCombat_States* m_states;
    struct MessageBox* m_pressToStartHint;
    struct IUberState__Array* m_affectingUberStates;
    struct Dictionary_2_System_Int32_System_String_* m_conditionNameMap;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShrineCombat__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShrineCombat__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CollectablePlaceholder.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/EnemyArenaController.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_ShrineCombat_WaveProgressMarker_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ShrineCombat_States.h>
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_ShrineCombat__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineCombat__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShrineCombat__Fields_FWDDECL)
#include <Modloader/app/structs/ShrineCombat__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineCombat__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
