#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_DEFINED
struct GameWorldArea;
struct List_1_RuntimeWorldMapIcon_;
struct List_1_Moon_SerializedBooleanUberState_;
struct List_1_Moon_SerializedIntUberState_;
struct List_1_GameWorldArea_PlayerAbilityInfo_;
struct List_1_Moon_ConditionUberState_;
struct IUberState__Array;
struct PlayerUberStateDescriptor;
struct __declspec(align(8)) RuntimeGameWorldArea__Fields {
    struct GameWorldArea* Area;
    struct List_1_RuntimeWorldMapIcon_* Icons;
    struct List_1_Moon_SerializedBooleanUberState_* CollectableIconStates;
    struct List_1_Moon_SerializedBooleanUberState_* ShrineStates;
    struct List_1_Moon_SerializedIntUberState_* RaceStates;
    struct List_1_GameWorldArea_PlayerAbilityInfo_* AbilityTrees;
    struct List_1_Moon_ConditionUberState_* OtherAreaProgressionStates;
    struct IUberState__Array* m_statesThatDirtyArea;
    struct PlayerUberStateDescriptor* PlayerUberState;
    float m_collectablesCompletionAmount;
    float m_completionAmount;
    bool m_dirtyCompletionAmount;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_FWDDECL
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_GameWorldArea_PlayerAbilityInfo_.h>
#include <Modloader/app/structs/List_1_Moon_ConditionUberState_.h>
#include <Modloader/app/structs/List_1_Moon_SerializedBooleanUberState_.h>
#include <Modloader/app/structs/List_1_Moon_SerializedIntUberState_.h>
#include <Modloader/app/structs/List_1_RuntimeWorldMapIcon_.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeGameWorldArea__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGameWorldArea__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
